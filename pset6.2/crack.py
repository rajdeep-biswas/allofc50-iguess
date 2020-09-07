from sys import argv
import crypt

hesh = argv[1]
salty = " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

salt = hesh[0] + hesh[1]

for a1 in range(53):
    for a2 in range(53):
        for a3 in range(53):
            for a4 in range(53):
                for a5 in range(53):
                    key = (salty[a5] + salty[a4] + salty[a3] + salty[a2] + salty[a1]).strip()
                    if crypt.crypt(key, salt) == hesh:
                        print(key)
                        exit(1)