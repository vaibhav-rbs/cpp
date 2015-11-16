CFLAGS=-Wall -g

ex1: 
	rm -rf ex1
	cc  -Wall -g ex1.c -o ex1

ex3:
	rm -rf ex3
	cc  -Wall -g ex3.c -o ex3

ex4:
	rm -rf ex4
	cc  -Wall -g ex4.c -o ex4

ex5:
	rm -rf ex5
	cc  -Wall -g ex5.c -o ex5
clean:
	rm -rf ex1
	rm -rf ex3
	rm -rf ex4
