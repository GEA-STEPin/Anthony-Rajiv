SRC: stack.c main.c Unity/unity.c

a.out: $(SRC)
	gcc $^ -o $@

test: a.out
	./a.out

analyze: test
	cppcheck --enable=all *.c

memory_leak: test
	valgrind ./a.out

coverage: 
	gcc -fprofile-arcs -ftest-coverage stack.c main.c Unity/unity.c -IUnity -o a.out
	./a.out
	gcov -a *.c

clean:
	rm -rf *.out *.gcov *.gcda *.gcno *.o                  