import sys

if len(sys.argv) != 2:
    print("invalid usage")
    exit(0)

key = sys.argv[1]

for i in range(len(key)):
    if key[i].isalpha() == 0:
        print("invalid keyword")
        exit(0)

print("plaintext: ", end="")
ptext = input()

print("ciphertext: ", end="")

j = 0

for i in range(len(ptext)):
    if ptext[i].isalpha() != 0:
        c = ptext[i].upper()
        d = key[j % len(key)].upper()
        j += 1
        p = ord(c) % ord('A')
        k = ord(d) % ord('A')
        foo = (p + k) % 26
        o = chr(ord('A') + foo)

        if ptext[i].islower() != 0:
            print(o.lower(), end="")
        else:
            print(o, end="")
    else:
        print(ptext[i], end="")

print()