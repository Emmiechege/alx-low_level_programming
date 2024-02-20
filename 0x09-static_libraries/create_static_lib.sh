#!/bin/bash
gcc -std=gnu89 -Werror -Wall -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
