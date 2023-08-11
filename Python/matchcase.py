# a = int(input("Enter the number: "))
#
# match a:
#     case 1:
#         print("Case is 1")
#     case 2:
#         print("Case is 2")
#     case 3:
#         print("Case is 4")
#     case 4:
#         print("Case is 4")
#     case _:
#         print("No match found")

# Python program to write table of number lies between 1 to 10.

num = int(input("Enter number between 1 to 10: "))
for i in range(1,11):
    match num:
        case 1:
            print(num*i)
        case 2:
            print(num*i)
        case 3:
            print(num*i)
        case 4:
            print(num*i)
        case 5:
            print(num*i)
        case 6:
            print(num*i)
        case 7:
            print(num*i)
        case 8:
            print(num*i)
        case 9:
            print(num*i)
        case 10:
            print(num*i)
        case _:
            print("Please enter number between 1 to 10")

