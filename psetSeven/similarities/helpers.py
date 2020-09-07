def lines(a, b):
    """Return lines in both a and b"""

    linesA = []

    newstr = ""

    for char in range(len(a)):
        if char == len(a) - 1:
            newstr += a[char]
        if a[char] != '\n' and char != len(a) - 1:
            newstr += a[char]
        else:
            linesA.append(newstr)
            newstr = ""

    linesB = []

    newstr = ""
    for char in range(len(b)):
        if char == len(b) - 1:
            newstr += b[char]
        if b[char] != '\n' and char != len(b) - 1:
            newstr += b[char]
        else:
            linesB.append(newstr)
            newstr = ""

    lines = []

    for line in linesA:
        if line in linesB:
            lines.append(line)

    return lines


def sentences(a, b):
    """Return sentences in both a and b"""

    from nltk.tokenize import sent_tokenize

    sentencesA = []

    for sent in sent_tokenize(a):
        sentencesA.append(sent)

    for sent in sentencesA:
        print(sent)

    sentencesB = []

    for sent in sent_tokenize(b):
        sentencesB.append(sent)

    lines = []

    for line in sentencesA:
        if line in sentencesB:
            lines.append(line)
            sentencesB.remove(line)

    return lines


def substrings(a, b, n):
    """Return substrings of length n in both a and b"""

    substrA = []

    for i in range(0, len(a)):
        if not len(a[slice(i, i + n)]) < n:
            substrA.append(a[slice(i, i + n)])

    substrB = []

    for i in range(0, len(b)):
        if not len(b[slice(i, i + n)]) < n:
            substrB.append(b[slice(i, i + n)])

    lines = []

    for line in substrB:
        if line in substrA and line not in lines:
            lines.append(line)

    return lines
