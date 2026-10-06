n = int(input("Enter an integer: "))
reversed_num = 0

temp = abs(n)
while temp > 0:
    remainder = temp % 10
    reversed_num = (reversed_num * 10) + remainder
    temp //= 10

if n < 0:
    reversed_num = -reversed_num

print(f"Reversed Number = {reversed_num}")
