{"changed":true,"filter":false,"title":"credit.c","tooltip":"~/workspace/pset1/credit.c","value":"#include <math.h>\n#include <stdio.h>\n#include <cs50.h>\n\nint main(void)\n{\n    printf(\"Credit card number: \");\n    long long int credit = get_long_long();\n\n    long long int credit1 = credit;\n    int dig = 0;\n    while(credit != 0) // counts number of digits\n    {\n        credit /= 10;\n        dig++;\n\n    }\n\n    credit = credit1;\n    int sum0 = 0, sum1 = 0;\n    credit /= 10; // to start off from the second last digit\n    for(int i = 0; i < dig / 2; i++) // finds the sum of second-to-last digit times 2 thingy\n    {\n        sum1 = (credit % 10) * 2;\n        if(sum1 / 10 == 0) {\n            sum0 += sum1;\n        }\n        else {\n            for(int j = 0; j < 2; j++) {\n                sum0 += sum1 % 10; // sum 0 is your final value from this loop for the checksum\n                sum1 /= 10;\n            }\n        }\n//        printf(\"%lli | %d\\n\", credit, sum0);\n        credit /= 100;\n    }\n\n    credit = credit1;\n    int sum2 = 0;\n    for(int i = 0; i <= dig / 2; i++) // adds the remaining numbers\n    {\n        sum2 += credit % 10; // sum 2 is your final value from this loop for the checksum\n        credit /= 100;\n//        printf(\"%lli | %d\\n\", credit, sum2);\n    }\n\n    int checksum = sum0 + sum2;\n\n    printf(\"checksum: %d\\n\", checksum);\n\n    if(checksum % 10 == 0) { // checks if the checksum modulus 10 is 0\n        credit = credit1;\n        if(dig == 16) {\n            if(credit / 1000000000000000 == 4)\n                printf(\"VISA\\n\");\n            else if(credit / 100000000000000 >= 51 && credit / 100000000000000 <= 55)\n                printf(\"MASTERCARD\\n\");\n            else\n                printf(\"INVALID\\n\");\n        }\n\n        else if(dig == 13) {\n            if(credit / 1000000000000 == 4)\n                printf(\"VISA\\n\");\n            else\n                printf(\"INVALID\\n\");\n        }\n\n        else if(dig == 15) {\n            if(credit / 10000000000000 == 34 || credit / 10000000000000 == 37)\n                printf(\"AMEX\\n\");\n            else\n                printf(\"INVALID\\n\");\n        }\n    }\n    else\n            printf(\"INVALID\\n\");\n}","undoManager":{"mark":42,"position":42,"stack":[[{"start":{"row":46,"column":31},"end":{"row":47,"column":0},"action":"insert","lines":["",""],"id":2},{"start":{"row":47,"column":0},"end":{"row":47,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":47,"column":4},"end":{"row":48,"column":0},"action":"insert","lines":["",""],"id":3},{"start":{"row":48,"column":0},"end":{"row":48,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":47,"column":4},"end":{"row":48,"column":0},"action":"insert","lines":["",""],"id":4},{"start":{"row":48,"column":0},"end":{"row":48,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":48,"column":4},"end":{"row":48,"column":5},"action":"insert","lines":["p"],"id":5}],[{"start":{"row":48,"column":5},"end":{"row":48,"column":6},"action":"insert","lines":["r"],"id":6}],[{"start":{"row":48,"column":6},"end":{"row":48,"column":7},"action":"insert","lines":["i"],"id":7}],[{"start":{"row":48,"column":7},"end":{"row":48,"column":8},"action":"insert","lines":["n"],"id":8}],[{"start":{"row":48,"column":8},"end":{"row":48,"column":9},"action":"insert","lines":["t"],"id":9}],[{"start":{"row":48,"column":9},"end":{"row":48,"column":10},"action":"insert","lines":["f"],"id":10}],[{"start":{"row":48,"column":10},"end":{"row":48,"column":12},"action":"insert","lines":["()"],"id":11}],[{"start":{"row":48,"column":11},"end":{"row":48,"column":13},"action":"insert","lines":["\"\""],"id":12}],[{"start":{"row":48,"column":12},"end":{"row":48,"column":13},"action":"insert","lines":["%"],"id":13}],[{"start":{"row":48,"column":13},"end":{"row":48,"column":14},"action":"insert","lines":["d"],"id":14}],[{"start":{"row":48,"column":15},"end":{"row":48,"column":16},"action":"insert","lines":[","],"id":15}],[{"start":{"row":48,"column":16},"end":{"row":48,"column":17},"action":"insert","lines":[" "],"id":16}],[{"start":{"row":48,"column":12},"end":{"row":48,"column":13},"action":"insert","lines":["c"],"id":17}],[{"start":{"row":48,"column":13},"end":{"row":48,"column":14},"action":"insert","lines":["h"],"id":18}],[{"start":{"row":48,"column":14},"end":{"row":48,"column":15},"action":"insert","lines":["e"],"id":19}],[{"start":{"row":48,"column":15},"end":{"row":48,"column":16},"action":"insert","lines":["c"],"id":20}],[{"start":{"row":48,"column":16},"end":{"row":48,"column":17},"action":"insert","lines":["k"],"id":21}],[{"start":{"row":48,"column":17},"end":{"row":48,"column":18},"action":"insert","lines":["s"],"id":22}],[{"start":{"row":48,"column":18},"end":{"row":48,"column":19},"action":"insert","lines":["u"],"id":23}],[{"start":{"row":48,"column":19},"end":{"row":48,"column":20},"action":"insert","lines":["m"],"id":24}],[{"start":{"row":48,"column":20},"end":{"row":48,"column":21},"action":"insert","lines":["L"],"id":25}],[{"start":{"row":48,"column":21},"end":{"row":48,"column":22},"action":"insert","lines":[":"],"id":26}],[{"start":{"row":48,"column":22},"end":{"row":48,"column":23},"action":"insert","lines":[" "],"id":27}],[{"start":{"row":48,"column":22},"end":{"row":48,"column":23},"action":"remove","lines":[" "],"id":28}],[{"start":{"row":48,"column":21},"end":{"row":48,"column":22},"action":"remove","lines":[":"],"id":29}],[{"start":{"row":48,"column":20},"end":{"row":48,"column":21},"action":"remove","lines":["L"],"id":30}],[{"start":{"row":48,"column":20},"end":{"row":48,"column":21},"action":"insert","lines":[":"],"id":31}],[{"start":{"row":48,"column":21},"end":{"row":48,"column":22},"action":"insert","lines":[" "],"id":32}],[{"start":{"row":48,"column":24},"end":{"row":48,"column":25},"action":"insert","lines":["\\"],"id":33}],[{"start":{"row":48,"column":25},"end":{"row":48,"column":26},"action":"insert","lines":["n"],"id":34}],[{"start":{"row":48,"column":29},"end":{"row":48,"column":30},"action":"insert","lines":["c"],"id":35}],[{"start":{"row":48,"column":30},"end":{"row":48,"column":31},"action":"insert","lines":["h"],"id":36}],[{"start":{"row":48,"column":31},"end":{"row":48,"column":32},"action":"insert","lines":["e"],"id":37}],[{"start":{"row":48,"column":32},"end":{"row":48,"column":33},"action":"insert","lines":["c"],"id":38}],[{"start":{"row":48,"column":33},"end":{"row":48,"column":34},"action":"insert","lines":["k"],"id":39}],[{"start":{"row":48,"column":34},"end":{"row":48,"column":35},"action":"insert","lines":["s"],"id":40}],[{"start":{"row":48,"column":35},"end":{"row":48,"column":36},"action":"insert","lines":["u"],"id":41}],[{"start":{"row":48,"column":36},"end":{"row":48,"column":37},"action":"insert","lines":["m"],"id":42}],[{"start":{"row":48,"column":38},"end":{"row":48,"column":39},"action":"insert","lines":[";"],"id":43}],[{"start":{"row":47,"column":0},"end":{"row":47,"column":4},"action":"remove","lines":["    "],"id":44},{"start":{"row":49,"column":0},"end":{"row":49,"column":4},"action":"remove","lines":["    "]}],[{"start":{"row":46,"column":31},"end":{"row":47,"column":0},"action":"remove","lines":["",""],"id":46}],[{"start":{"row":47,"column":0},"end":{"row":48,"column":39},"action":"remove","lines":["","    printf(\"checksum: %d\\n\", checksum);"],"id":46}]]},"ace":{"folds":[],"scrolltop":480,"scrollleft":0,"selection":{"start":{"row":56,"column":39},"end":{"row":56,"column":39},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1549390260759}