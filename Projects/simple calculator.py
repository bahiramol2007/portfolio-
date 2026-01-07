num1 = float(input("Enter 1st no.: "))
num2 = float(input("Enter 2nd no.: "))

print("select operation:")
print("1. Add")
print("2. Subtract")
print("3. Multiply")
print("4. Divide")

choice = input("Enter choice (1/2/3/4): ")

if choice == '1':
    print("result:", num1 + num2)
elif choice == '2':
    print("result:", num1 - num2)
elif choice == '3':
    print("result:", num1 * num2)
elif choice == '4':
    if num2 != 0:
        print("result:", num1 / num2)
    else:
        print("Error division by 0 is not allowed")
else:
    print("invalid")