CFLAGS=-Wall -g
ex17:ex17.c
	gcc ex17.c -o ex17
ex21:ex21.c
	gcc ex21.c -o ex21
ex16:ex16_2.c
	gcc ex16_2.c -o ex16
all:
	ex16	

clean:
	rm -f EX0 EX3 ex4 ex6 ex7 ex8 ex9 ex10 ex11 ex12 ex13
