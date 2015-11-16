CFLAGS=-Wall -g

ex1: 
	rm -rf ex1
	cc  ex1.c -o ex1

ex3:
	rm -rf ex3
	cc  ex3.c -o ex3

clean:
	rm -rf ex1
	rm -rf ex3
