def problemDescription():
    print("* Number of divisors *")

def getNumOfDivisors(number):

    divisors = 1

    for i in range(2, number + 1):
        if number == 1:
            break

        exponent = 0

        while number % i == 0:
            exponent += 1
            number //= i
        
        divisors *= exponent + 1
    
    return divisors

problemDescription()

m = int(input("Type the first number:\n"))
n = int(input("Type the second number:\n"))

print("Number of divisors of the first number is", getNumOfDivisors(m))
print("Number of divisors of the second number is", getNumOfDivisors(n))