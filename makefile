compile: main.c 
	 gcc main.c -o test

run: test
	 ./test

clean:
	 rm test
