rm -rf libft.a
gcc -c *.c
ar rc libft.a *.o
rm -rf *.o
