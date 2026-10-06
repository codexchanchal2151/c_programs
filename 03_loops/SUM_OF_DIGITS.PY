n = int(input("Enter an integer: "))
sum_of_digits = 0

temp = abs(n)
while temp > 0:
    remainder = temp % 10
    sum_of_digits += remainder
    temp //= 10

print(f"Sum of digits = {sum_of_digits}")
