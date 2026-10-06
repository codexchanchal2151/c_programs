num = int(input("Enter an integer: "))
original_num = num
n = len(str(num))
result = 0

temp = num
while temp > 0:
    remainder = temp % 10
    result += remainder ** n
    temp //= 10

if result == original_num:
    print(f"{original_num} is an Armstrong number.")
else:
    print(f"{original_num} is not an Armstrong number.")
