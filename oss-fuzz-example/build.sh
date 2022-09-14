$CC $CFLAGS char_lib.c -c -o char_lib.o
$CC $CFLAGS fuzz_char_lib.c -c -o fuzz_char_lib.o
$CC $CFLAGS $LIB_FUZZING_ENGINE fuzz_char_lib.o char_lib.o -o $OUT/simple-fuzzer
