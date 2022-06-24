#!/bin/bash
gcc -c -L. *.c | ar -rc liball.a *.o
