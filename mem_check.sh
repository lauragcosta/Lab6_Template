#!/bin/sh

make debug
valgrind --leak-check=full --show-reachable=yes --track-origins=yes ./prog
