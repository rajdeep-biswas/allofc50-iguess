while True:
    n = input("height: ")
    if n.isdigit() and int(n) > 0 and int(n) < 9:
        break;

n = int(n)

for i in range(n, 0, -1):
    for j in range(1, i):
        print(" ", end="")
    for j in range(n, i - 1, -1):
        print("#", end="")

    print("  ", end="")

    for j in range(n, i - 1, -1):
        print("#", end="")

    print()