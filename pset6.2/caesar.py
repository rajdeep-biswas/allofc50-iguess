from sys import argv

if len(argv) != 2:
    exit("invalid input")

key = int(argv[1])
arr = input("plaintext: ")

print("ciphertext: ", end="")
for i in range(len(arr)):
    if ord(arr[i]) >= ord('a') and ord(arr[i]) <= ord('z'):
        print(chr(97 + ((ord(arr[i]) - 97 + key) % 26)), end="");
    elif ord(arr[i]) >= ord('A') and ord(arr[i]) <= ord('Z'):
        print(chr(65 + ((ord(arr[i]) - 65 + key) % 26)), end="");
    else:
        print(arr[i], end="")
print()