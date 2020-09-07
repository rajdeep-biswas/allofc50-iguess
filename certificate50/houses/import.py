import sys
import csv
from cs50 import SQL

if len(sys.argv) != 2:
    print("Usage: python import.py characters.csv")
    exit()

csvpath = sys.argv[1]

db = SQL("sqlite:///students.db")

count = 1

with open(csvpath) as csvfile:
    reader = csv.DictReader(csvfile)
    for row in reader:
        sname = {}
        name = row['name'].split()
        if len(name) == 3:
            sname["middle"] = name[1]
        else:
            sname["middle"] = None
        sname["first"], sname["last"] = name[::len(name) - 1]
        db.execute("INSERT INTO students VALUES(:id, :first, :middle, :last, :house, :birth)",
                   id=count, first=sname["first"], middle=sname["middle"], last=sname["last"], house=row["house"], birth=row["birth"],)
        count += 1