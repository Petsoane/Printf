#!/bin/zsh

cd libft
make re
cp libft.a ..
make clean
cd ..
gcc driver.c ftprintf.a libft.a

