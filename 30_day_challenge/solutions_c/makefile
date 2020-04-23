CC=gcc
CFLAGS=
DEPS = src/subarray_sum_equals_k.h
OBJ = main.o src/subarray_sum_equals_k.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -rf *.o main
