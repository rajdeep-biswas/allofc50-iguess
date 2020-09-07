print("Credit card number: ", end="")
credit = int(input())

credit1 = credit
dig = 0

while credit != 0:
    credit //= 10
    dig += 1

credit = credit1

sum0 = 0
sum1 = 0
credit //=10

for i in range(dig // 2):
    sum1 = (credit % 10) * 2
    if sum1 // 10 == 0:
        sum0 += sum1
    else:
        for j in range(2):
            sum0 += sum1 % 10
            sum1 //= 10
    credit //= 100

credit = credit1
sum2 = 0
for i in range(dig // 2 + 1):
    sum2 += credit % 10
    credit //= 100

checksum = sum0 + sum2

if checksum % 10 == 0:
    credit = credit1
    if dig == 16:
        if credit // 1000000000000000 == 4:
            print("VISA")
        elif credit // 100000000000000 >= 51 and credit // 100000000000000 <= 55:
            print("MASTERCARD")
        else:
            print("INVALID")

    elif dig == 13:
        if credit // 1000000000000 == 4:
            print("VISA")
        else:
            print("INVALID")

    elif dig == 15:
        if credit // 10000000000000 == 34 or credit // 10000000000000 == 37:
            print("AMEX")
        else:
            print("INVALID")

else:
    print("INVALID")
