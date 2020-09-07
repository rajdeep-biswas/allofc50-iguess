from cs50 import get_string
from sys import argv

def main():

    if(len(argv) != 2):
        exit("not good")

    dictionary = argv[1]

    badWords = set()
    file = open(dictionary, "r")
    for line in file:
        badWords.add(line.rstrip("\n"))
    file.close()

    s = input("What message would you like to sensor?\n")

    s = s.split(" ")

    for word in s:
        if word.lower() in badWords:
            for letter in word:
                print("*", end="")
        else:
            print(word, end="")
        print("", end=" ")

    print()

if __name__ == "__main__":
    main()