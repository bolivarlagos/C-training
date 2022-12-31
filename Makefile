CC = gcc
CFLAG = -o

christmas_path = ChristmasTree/main.c 
fibo_path = RecursiveFibonacci/main.c 
piramid_path = RecursivePiramid/main.c 

christmas_out = christmas.out
fibo_out = fibo.out
piramid_out = piramid.out

three:
	${CC} ${CFLAG} ${christmas_out} ${christmas_path} 

fibo:
	${CC} ${CFLAG} ${fibo_out} ${fibo_path}

piramid:
	${CC} ${CFLAG} ${piramid_out} ${piramid_path} 

clean:
	rm *.out

all:
	${CC} ${CFLAG} ${christmas_out} ${christmas_path} &&\
	${CC} ${CFLAG} ${fibo_out} ${fibo_path} &&\
	${CC} ${CFLAG} ${piramid_out} ${piramid_path}\
