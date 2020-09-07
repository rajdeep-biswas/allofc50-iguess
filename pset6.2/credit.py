from cs50 import get_int

card = get_int("Number: ")

l = 0
carray = []

while card != 0:
    carray.append(card % 10)
    card //= 10
    l += 1

checksum = 0

for i in range(1, l, 2):
    if (carray[i] * 2) // 10 != 0:
        checksum += (carray[i] * 2) % 10 + (carray[i] * 2) // 10
    else:
        checksum += carray[i] * 2


for i in range(0, l, 2):
    checksum += carray[i]

if checksum % 10 == 0:
    if l == 16:
        if(carray[l - 1] == 5 and (carray[l - 2] >= 1 and carray[l - 2] <= 5)):
            print("MASTERCARD")
        elif carray[l - 1] == 4:
            print("VISA")
        else:
            print("INVALID")
    elif(l == 15 and carray[l - 1] == 3 and (carray[l - 2] == 4 or carray[l - 2] == 7)):
        print("AMEX")
    elif l == 13 and carray[l - 1] == 4:
        print("VISA")
    else:
        print("INVALID")
else:
    print("INVALID")