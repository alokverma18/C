a=input('Enter your Name: ')
print('Hello',a)
print('Welcome to my Python Calculator!!!')
b=int(input('Enter first number: '))
c=int(input('Enter second number: '))
d=input('Enter the operator: ')
if d=='+':
    print(b+c)

elif d=='-':
    print(b-c)
elif d=="*":
    print(b*c)
elif d=='/':
    print(b/c)
else:
    print('Enter only these operators(+, -, *, /)')
print('Thank You',a)

