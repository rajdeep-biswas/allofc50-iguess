from tests import Tests

lists = []

for i in range(2):
    a = input('a: ')
    b = input('b: ')

    lists.append(Tests(a, b))

for test in lists:
    print('{} and {}'.format(test.a, test.b))