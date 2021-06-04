#include <stdio.h>
#include <stdlib.h>

#define MAX_PTR 2

// 동적 할당 받은 메모리 영역의 시작 주소를 저장할 배열
void* allocPtrList[MAX_PTR];

// 상단 배열에 저장된 동적 할당 받은 영역 수
// clearPtrList() 함수 호출 시 다시 0으로 리셋
int ptrCnt = 0;

// 동적 할당 받은 모든 메모리를 해제
void clearPtrList() {
    for (int i = 0; i < ptrCnt; i++)
        free(allocPtrList[i]);

    ptrCnt = 0;
}

// 주어진 size만큼 동적 할당 받아 그 시작 주소를 반환
void* allocatePtr(int size) {
    // 이미 최대 개수만큼 할당 받은 경우
    // 기존에 할당 받은 모든 메모리를 해제
    if (ptrCnt == MAX_PTR) {
        printf("Freeing all allocated memories...\n");
        clearPtrList();
    }

    // 할당할 메모리 크기가 0보다 큰지 검증
    if (size <= 0) {
        printf("Invalid allocation size: %d\n", size);
        exit(0);
    }

    // size만큼의 메모리 공간을 동적 할당
    void* ptr = malloc(size);

    // 동적 할당에 성공했는지 검증
    if (!ptr) {
        printf("Memory allocation failed!\n");
        exit(0);
    }

    // 할당된 메모리 주소를 관리하는 배열에 새 주소를 저장
    // 이때 할당 횟수도 1 증가
    allocPtrList[ptrCnt++] = ptr;

    // 할당 받은 메모리 주소 반환
    return ptr;
}

int main() {
    int arrLen = 3;
    int i;

    int* intArr = (int*)allocatePtr(sizeof(int) * arrLen);
    double* doubleArr = (double*)allocatePtr(sizeof(double) * arrLen);
    
    // 오류 #1
    /* 길이가 len인 메모리를 할당받았을 때 가능한 인덱스는 [0] 부터 [len - 1] 까지입니다. 따라서 [len]에 접근하면 undefined-behavior가 발생합니다. (heap-buffer-overflow)
    for (i = 1; i <= 3; i++)
        intArr[i] = i;
    */

    // 해결 #1
    for (i = 0; i < arrLen; i++)
        intArr[i] = i;

    // 단서 #2
    char* charArr1 = (char*)allocatePtr(sizeof(char) * arrLen); // 이미 2개가 할당되어있으므로 기존에 할당받은 모든 메모리는 해제되었습니다. 따라서 intArr과 doubleArr을 dereference 하면 undefined-behavior가 발생합니다.
    char* charArr2 = (char*)allocatePtr(sizeof(char) * arrLen);

    // 오류 #2
    /* 위에서 설명한 대로 doubleArr은 이미 deallocate 된 메모리 주소를 가리키고 있으므로 dereference하면 undefined-behavior가 발생합니다. (heap-use-after-free)
    for (i = 0; i < arrLen; i++)
        printf("%lf ", doubleArr[i]);
    */
    printf("\n");

    // 단서 #3
    char* charArr3 = (char*)allocatePtr(sizeof(char) * arrLen); // 이미 2개가 할당되어있으므로 기존에 할당받은 모든 메모리는 해제되었습니다. 따라서 charArr1과 charArr2을 deallocate 하면 undefined-behavior가 발생합니다.
    for (i = 0; i < arrLen; i++)
        charArr3[i] = '0' + i;
    
    // 오류 #3
    /* 이미 deallocate 된 메모리 주소를 다시 deallocate 하면 undefined-behavior가 발생합니다. (double-free)
    free(charArr1); 
    free(charArr2);
    */
    free(charArr3);

    return 0;
}
