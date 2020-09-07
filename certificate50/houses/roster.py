import sys
from cs50 import SQL

if len(sys.argv) != 2:
    print("Usage: python roster.py Gryffindor")
    exit()

house = sys.argv[1]

db = SQL("sqlite:///students.db")

rows = db.execute("SELECT * FROM students WHERE house=:house ORDER BY last, first",
                  house=house)

for row in rows:
    if not row["middle"]:
        name = row["first"] + " " + row["last"]
    else:
        name = row["first"] + " " + row["middle"] + " " + row["last"]
    print(name + ", born " + str(row["birth"]))