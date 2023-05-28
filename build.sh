GCC = "gcc"
ARGS = "-Wall -c"
if (($# == 0)); then
    $(GCC) $(ARGS) ./parser.c -std=c99
    $(GCC) $(ARGS) ./reader.c -std=c99
    $(GCC) $(ARGS) ./array.c -std=c99
    $(GCC) ./*.o ./sh.c -o ./sh.out -g -std=c99
    rm -f ./*.o
fi
