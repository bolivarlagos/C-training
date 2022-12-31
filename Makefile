three:
	gcc -o christmas.out ChristmasTree/main.c 

fibo:
	gcc -o fibo.out RecursiveFibonacci/main.c 

piramid:
	gcc -o piramid.out RecursivePiramid/main.c 

clean:
	rm *.out

all:
	gcc -o christmas.out ChristmasTree/main.c &&\
	gcc -o fibo.out RecursiveFibonacci/main.c &&\
	gcc -o piramid.out RecursivePiramid/main.c\
