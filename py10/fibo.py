print("number of terms: ", end="")
n = int(input())

a = 0
b = 1

for i in range(n):
    c = a + b
    print("{} ".format(a), end="")
    a = b
    b = c
print()