#!/lib/bash
gcc -Wall -pedantic -Werror -Wextra -с *.c
ar -rc liball.a *.o
ranlib liball.a
