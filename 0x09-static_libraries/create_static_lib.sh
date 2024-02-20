#!/bin/bash
gcc -c -std=gnu89 -Werror -Wall -Wextra *.c
ar -r liball.a *.o
ranlib liball.a
