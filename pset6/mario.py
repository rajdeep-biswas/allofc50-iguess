print("Lines: ", end="")

n = int(input())

for i in range(n, 0, -1):
    for j in range(0, n):
        if j < i - 1:
            print(" ", end="")
        else:
            print("#", end="")
    print("  ", end="")
    for k in range(n + 1 - i):
        print("#", end="")
    print()