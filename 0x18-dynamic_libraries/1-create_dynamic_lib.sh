#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
export LO_LIBRARY_PATH=.:$LO_LIBRARY_PATH
