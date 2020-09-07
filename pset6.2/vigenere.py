from sys import argv

if len(argv) != 2:
    exit("invalid input")

key = argv[1]
keyz = []

for i in range(len(key)):
    if ord(key[i]) >= ord('A') and ord(key[i]) <= ord('Z'):
        keyz.append(chr(ord(key[i]) + 32))
    elif ord(key[i]) >= ord('a') and ord(key[i]) <= ord('z'):
        keyz.append(key[i])
    else:
        exit(1)

arr = input("plaintext: ")
print("ciphertext: ", end="")

keySize = len(key)
j = 0

for i in range(len(arr)):
    if ord(arr[i]) >= ord('a') and ord(arr[i]) <= ord('z'):
        print(chr(97 + (ord(arr[i]) - 97 + (ord(keyz[(j % keySize)]) - 97)) % 26), end="")
        j += 1
    elif ord(arr[i]) >= ord('A') and ord(arr[i]) <= ord('Z'):
        print(chr(65 + (ord(arr[i]) - 65 + (ord(keyz[(j % keySize)]) - 97)) % 26), end="")
        j += 1
    else:
        print(arr[i], end="")
print()
