{"filter":false,"title":"crack1.c","tooltip":"/pset2extra/crack1.c","undoManager":{"mark":100,"position":100,"stack":[[{"start":{"row":9,"column":4},"end":{"row":9,"column":5},"action":"remove","lines":["e"],"id":238}],[{"start":{"row":9,"column":0},"end":{"row":9,"column":4},"action":"remove","lines":["    "],"id":239}],[{"start":{"row":8,"column":37},"end":{"row":9,"column":0},"action":"remove","lines":["",""],"id":240}],[{"start":{"row":8,"column":13},"end":{"row":8,"column":14},"action":"remove","lines":["s"],"id":241},{"start":{"row":8,"column":13},"end":{"row":8,"column":14},"action":"insert","lines":["d"]}],[{"start":{"row":0,"column":0},"end":{"row":9,"column":1},"action":"remove","lines":["#include <stdio.h>","#include <cs50.h>","","#define _XOPEN_SOURCE","#include <unistd.h>","","int main()","{","    printf(\"%d\\n\",crypt(\"abc\",\"ab\"));","}"],"id":242},{"start":{"row":0,"column":0},"end":{"row":31,"column":1},"action":"insert","lines":["#include <stdio.h>","#include <time.h>","#include <unistd.h>","#include <crypt.h>","","int","main(void)","{","  unsigned long seed[2];","  char salt[] = \"$1$........\";","  const char *const seedchars =","    \"./0123456789ABCDEFGHIJKLMNOPQRST\"","    \"UVWXYZabcdefghijklmnopqrstuvwxyz\";","  char *password;","  int i;","","  /* Generate a (not very) random seed.","     You should do it better than this... */","  seed[0] = time(NULL);","  seed[1] = getpid() ^ (seed[0] >> 14 & 0x30000);","","  /* Turn it into printable characters from ‘seedchars’. */","  for (i = 0; i < 8; i++)","    salt[3+i] = seedchars[(seed[i/5] >> (i%5)*6) & 0x3f];","","  /* Read in the user’s password and encrypt it. */","  password = crypt(getpass(\"Password:\"), salt);","","  /* Print the results. */","  puts(password);","  return 0;","}"]}],[{"start":{"row":3,"column":18},"end":{"row":4,"column":0},"action":"insert","lines":["",""],"id":243}],[{"start":{"row":4,"column":0},"end":{"row":5,"column":0},"action":"insert","lines":["",""],"id":244}],[{"start":{"row":5,"column":0},"end":{"row":5,"column":1},"action":"insert","lines":["#"],"id":245}],[{"start":{"row":5,"column":1},"end":{"row":5,"column":2},"action":"insert","lines":["d"],"id":246}],[{"start":{"row":5,"column":2},"end":{"row":5,"column":3},"action":"insert","lines":["e"],"id":247}],[{"start":{"row":5,"column":3},"end":{"row":5,"column":4},"action":"insert","lines":["f"],"id":248}],[{"start":{"row":5,"column":4},"end":{"row":5,"column":5},"action":"insert","lines":["i"],"id":249}],[{"start":{"row":5,"column":5},"end":{"row":5,"column":6},"action":"insert","lines":["n"],"id":250}],[{"start":{"row":5,"column":6},"end":{"row":5,"column":7},"action":"insert","lines":["e"],"id":251}],[{"start":{"row":5,"column":7},"end":{"row":5,"column":8},"action":"insert","lines":[" "],"id":252}],[{"start":{"row":5,"column":8},"end":{"row":5,"column":9},"action":"insert","lines":["X"],"id":253}],[{"start":{"row":5,"column":8},"end":{"row":5,"column":9},"action":"remove","lines":["X"],"id":254}],[{"start":{"row":5,"column":8},"end":{"row":5,"column":9},"action":"insert","lines":["X"],"id":255}],[{"start":{"row":5,"column":8},"end":{"row":5,"column":9},"action":"remove","lines":["X"],"id":256}],[{"start":{"row":5,"column":8},"end":{"row":5,"column":9},"action":"insert","lines":["_"],"id":257}],[{"start":{"row":5,"column":9},"end":{"row":5,"column":10},"action":"insert","lines":["X"],"id":258}],[{"start":{"row":5,"column":10},"end":{"row":5,"column":11},"action":"insert","lines":["O"],"id":259}],[{"start":{"row":5,"column":11},"end":{"row":5,"column":12},"action":"insert","lines":["P"],"id":260}],[{"start":{"row":5,"column":12},"end":{"row":5,"column":13},"action":"insert","lines":["E"],"id":261}],[{"start":{"row":5,"column":13},"end":{"row":5,"column":14},"action":"insert","lines":["N"],"id":262}],[{"start":{"row":5,"column":14},"end":{"row":5,"column":15},"action":"insert","lines":["_"],"id":263}],[{"start":{"row":5,"column":15},"end":{"row":5,"column":16},"action":"insert","lines":["S"],"id":264}],[{"start":{"row":5,"column":16},"end":{"row":5,"column":17},"action":"insert","lines":["O"],"id":265}],[{"start":{"row":5,"column":17},"end":{"row":5,"column":18},"action":"insert","lines":["u"],"id":266}],[{"start":{"row":5,"column":17},"end":{"row":5,"column":18},"action":"remove","lines":["u"],"id":267}],[{"start":{"row":5,"column":17},"end":{"row":5,"column":18},"action":"insert","lines":["U"],"id":268}],[{"start":{"row":5,"column":18},"end":{"row":5,"column":19},"action":"insert","lines":["R"],"id":269}],[{"start":{"row":5,"column":19},"end":{"row":5,"column":20},"action":"insert","lines":["C"],"id":270}],[{"start":{"row":5,"column":20},"end":{"row":5,"column":21},"action":"insert","lines":["e"],"id":271}],[{"start":{"row":5,"column":20},"end":{"row":5,"column":21},"action":"remove","lines":["e"],"id":272}],[{"start":{"row":5,"column":20},"end":{"row":5,"column":21},"action":"insert","lines":["E"],"id":273}],[{"start":{"row":7,"column":3},"end":{"row":8,"column":0},"action":"remove","lines":["",""],"id":274}],[{"start":{"row":7,"column":3},"end":{"row":7,"column":4},"action":"insert","lines":[" "],"id":275}],[{"start":{"row":9,"column":2},"end":{"row":31,"column":2},"action":"remove","lines":["unsigned long seed[2];","  char salt[] = \"$1$........\";","  const char *const seedchars =","    \"./0123456789ABCDEFGHIJKLMNOPQRST\"","    \"UVWXYZabcdefghijklmnopqrstuvwxyz\";","  char *password;","  int i;","","  /* Generate a (not very) random seed.","     You should do it better than this... */","  seed[0] = time(NULL);","  seed[1] = getpid() ^ (seed[0] >> 14 & 0x30000);","","  /* Turn it into printable characters from ‘seedchars’. */","  for (i = 0; i < 8; i++)","    salt[3+i] = seedchars[(seed[i/5] >> (i%5)*6) & 0x3f];","","  /* Read in the user’s password and encrypt it. */","  password = crypt(getpass(\"Password:\"), salt);","","  /* Print the results. */","  puts(password);","  "],"id":276}],[{"start":{"row":9,"column":2},"end":{"row":9,"column":3},"action":"remove","lines":["r"],"id":277}],[{"start":{"row":9,"column":2},"end":{"row":9,"column":3},"action":"remove","lines":["e"],"id":278}],[{"start":{"row":9,"column":2},"end":{"row":9,"column":3},"action":"remove","lines":["t"],"id":279}],[{"start":{"row":9,"column":2},"end":{"row":9,"column":3},"action":"remove","lines":["u"],"id":280}],[{"start":{"row":9,"column":2},"end":{"row":9,"column":3},"action":"remove","lines":["r"],"id":281}],[{"start":{"row":9,"column":2},"end":{"row":9,"column":3},"action":"remove","lines":["n"],"id":282}],[{"start":{"row":9,"column":2},"end":{"row":9,"column":3},"action":"remove","lines":[" "],"id":283}],[{"start":{"row":9,"column":2},"end":{"row":9,"column":3},"action":"remove","lines":["0"],"id":284}],[{"start":{"row":9,"column":2},"end":{"row":9,"column":3},"action":"remove","lines":[";"],"id":285}],[{"start":{"row":9,"column":2},"end":{"row":10,"column":0},"action":"remove","lines":["",""],"id":286}],[{"start":{"row":9,"column":1},"end":{"row":9,"column":2},"action":"remove","lines":[" "],"id":287}],[{"start":{"row":9,"column":0},"end":{"row":9,"column":1},"action":"remove","lines":[" "],"id":288}],[{"start":{"row":8,"column":1},"end":{"row":9,"column":0},"action":"remove","lines":["",""],"id":289}],[{"start":{"row":8,"column":1},"end":{"row":10,"column":0},"action":"insert","lines":["","    ",""],"id":290}],[{"start":{"row":9,"column":4},"end":{"row":9,"column":5},"action":"insert","lines":["p"],"id":291}],[{"start":{"row":9,"column":5},"end":{"row":9,"column":6},"action":"insert","lines":["r"],"id":292}],[{"start":{"row":9,"column":6},"end":{"row":9,"column":7},"action":"insert","lines":["i"],"id":293}],[{"start":{"row":9,"column":7},"end":{"row":9,"column":8},"action":"insert","lines":["n"],"id":294}],[{"start":{"row":9,"column":8},"end":{"row":9,"column":9},"action":"insert","lines":["t"],"id":295}],[{"start":{"row":9,"column":9},"end":{"row":9,"column":10},"action":"insert","lines":["f"],"id":296}],[{"start":{"row":9,"column":10},"end":{"row":9,"column":12},"action":"insert","lines":["()"],"id":297}],[{"start":{"row":9,"column":11},"end":{"row":9,"column":13},"action":"insert","lines":["\"\""],"id":298}],[{"start":{"row":9,"column":12},"end":{"row":9,"column":13},"action":"insert","lines":["%"],"id":299}],[{"start":{"row":9,"column":13},"end":{"row":9,"column":14},"action":"insert","lines":["C"],"id":300}],[{"start":{"row":9,"column":13},"end":{"row":9,"column":14},"action":"remove","lines":["C"],"id":301},{"start":{"row":9,"column":13},"end":{"row":9,"column":14},"action":"insert","lines":["c"]}],[{"start":{"row":9,"column":15},"end":{"row":9,"column":16},"action":"insert","lines":[","],"id":302}],[{"start":{"row":9,"column":16},"end":{"row":9,"column":17},"action":"insert","lines":[" "],"id":303}],[{"start":{"row":9,"column":17},"end":{"row":9,"column":18},"action":"insert","lines":["p"],"id":304}],[{"start":{"row":9,"column":17},"end":{"row":9,"column":18},"action":"remove","lines":["p"],"id":305}],[{"start":{"row":9,"column":17},"end":{"row":9,"column":18},"action":"insert","lines":["s"],"id":306}],[{"start":{"row":9,"column":18},"end":{"row":9,"column":19},"action":"insert","lines":["c"],"id":307}],[{"start":{"row":9,"column":18},"end":{"row":9,"column":19},"action":"remove","lines":["c"],"id":308}],[{"start":{"row":9,"column":17},"end":{"row":9,"column":18},"action":"remove","lines":["s"],"id":309}],[{"start":{"row":9,"column":17},"end":{"row":9,"column":18},"action":"insert","lines":["c"],"id":310}],[{"start":{"row":9,"column":18},"end":{"row":9,"column":19},"action":"insert","lines":["r"],"id":311}],[{"start":{"row":9,"column":19},"end":{"row":9,"column":20},"action":"insert","lines":["y"],"id":312}],[{"start":{"row":9,"column":20},"end":{"row":9,"column":21},"action":"insert","lines":["p"],"id":313}],[{"start":{"row":9,"column":21},"end":{"row":9,"column":22},"action":"insert","lines":["t"],"id":314}],[{"start":{"row":9,"column":22},"end":{"row":9,"column":24},"action":"insert","lines":["{}"],"id":315}],[{"start":{"row":9,"column":22},"end":{"row":9,"column":24},"action":"remove","lines":["{}"],"id":316}],[{"start":{"row":9,"column":22},"end":{"row":9,"column":23},"action":"insert","lines":[")"],"id":317}],[{"start":{"row":9,"column":23},"end":{"row":9,"column":25},"action":"insert","lines":["()"],"id":318}],[{"start":{"row":9,"column":23},"end":{"row":9,"column":25},"action":"remove","lines":["()"],"id":319}],[{"start":{"row":9,"column":22},"end":{"row":9,"column":23},"action":"remove","lines":[")"],"id":320}],[{"start":{"row":9,"column":22},"end":{"row":9,"column":23},"action":"insert","lines":[")"],"id":321}],[{"start":{"row":9,"column":22},"end":{"row":9,"column":23},"action":"remove","lines":[")"],"id":322}],[{"start":{"row":9,"column":22},"end":{"row":9,"column":24},"action":"insert","lines":["()"],"id":323}],[{"start":{"row":9,"column":23},"end":{"row":9,"column":25},"action":"insert","lines":["\"\""],"id":324}],[{"start":{"row":9,"column":24},"end":{"row":9,"column":25},"action":"insert","lines":["A"],"id":325}],[{"start":{"row":9,"column":25},"end":{"row":9,"column":26},"action":"insert","lines":["B"],"id":326}],[{"start":{"row":9,"column":26},"end":{"row":9,"column":27},"action":"insert","lines":["."],"id":327}],[{"start":{"row":9,"column":26},"end":{"row":9,"column":27},"action":"remove","lines":["."],"id":328}],[{"start":{"row":9,"column":27},"end":{"row":9,"column":28},"action":"insert","lines":[","],"id":329}],[{"start":{"row":9,"column":28},"end":{"row":9,"column":29},"action":"insert","lines":[" "],"id":330}],[{"start":{"row":9,"column":29},"end":{"row":9,"column":31},"action":"insert","lines":["\"\""],"id":331}],[{"start":{"row":9,"column":30},"end":{"row":9,"column":31},"action":"insert","lines":["A"],"id":332}],[{"start":{"row":9,"column":31},"end":{"row":9,"column":32},"action":"insert","lines":["B"],"id":333}],[{"start":{"row":9,"column":35},"end":{"row":9,"column":36},"action":"insert","lines":[";"],"id":334}],[{"start":{"row":9,"column":13},"end":{"row":9,"column":14},"action":"remove","lines":["c"],"id":335},{"start":{"row":9,"column":13},"end":{"row":9,"column":14},"action":"insert","lines":["i"]}],[{"start":{"row":9,"column":13},"end":{"row":9,"column":14},"action":"remove","lines":["i"],"id":336},{"start":{"row":9,"column":13},"end":{"row":9,"column":14},"action":"insert","lines":["c"]}],[{"start":{"row":9,"column":4},"end":{"row":9,"column":17},"action":"remove","lines":["printf(\"%c\", "],"id":337}],[{"start":{"row":9,"column":20},"end":{"row":9,"column":21},"action":"remove","lines":[")"],"id":338}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":9,"column":20},"end":{"row":9,"column":20},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1507058773977,"hash":"8de4fb226d1751d6175c16bb9cdd191a2b53c631"}