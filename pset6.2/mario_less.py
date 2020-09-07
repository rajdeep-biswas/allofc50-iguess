while True:
    n = input("height: ")
    if n.isdigit() and int(n) > 0 and int(n) < 9:
        break;

n = int(n)

for i in range(n, 0, -1):
    for j in range(1, n + 1):
        if j < i:
            print(" ", end="")
        else:
            print("#", end="")
    print()