gcc -Wall -c ./parser.c
gcc -Wall -c ./reader.c
gcc ./parser.o ./reader.o ./sh.c -o ./sh