def problemDescription():
    print("* Number of divisors *")

def getNumOfDivisors(number):

    divisors = 1

    for i in range(2, number + 1):
        if number == 1:             # 1이라면 일련의 과정이 끝났음으로 탈출
            return divisors

        exponent = 0                # 해당 소수가 몇개의 지수를 가지고 있는지 저장하는 변수 (소수가 아니라면 자동적으로 0이됨)

        while number % i == 0:      # 나누어진다면 해당 소수를 인수로 가지고있음 (소수가 아니라면 무시)
            exponent += 1           # 지수에 1을 더하고
            number //= i            # 해당 숫자를 나눠줌
        
        divisors *= exponent + 1    # 약수의 개수는 a1^b1 * a2^b2 * ... * an^bn 이라고 할 때 (b1 + 1)(b2 + 1)...(bn + 1)이기 때문
    
    return divisors

problemDescription()

m = int(input("Type the first number:\n"))
n = int(input("Type the second number:\n"))

print("Number of divisors of the first number is", getNumOfDivisors(m))
print("Number of divisors of the second number is", getNumOfDivisors(n))