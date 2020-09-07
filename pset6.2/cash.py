from cs50 import get_float

while True:
    f = get_float("change owed: ")
    if f > 0:
        break

change = round(float(f) * 100)
coins = 0

coins += change // 25
change %= 25

coins += change // 10
change %= 10

coins += change // 5
change %= 5

coins += change

print(coins)