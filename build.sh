if (($# == 0)); then
    gcc -Wall -c ./parser.c -std=c99
    gcc -Wall -c ./reader.c -std=c99
    gcc -Wall -c ./array.c -std=c99
    gcc ./*.o ./sh.c -o ./sh.out -g -std=c99
    rm -f ./*.o
else
    gcc -Wall -c ./parser.c -std=c99
    gcc -Wall -c ./reader.c -std=c99
    gcc -Wall -c ./array.c -std=c99
    gcc ./*.o ./sh.c -o ./sh.out -g -D TEST -std=c99
    rm -f ./*.o
fi