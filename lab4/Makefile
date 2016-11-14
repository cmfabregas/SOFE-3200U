COMPILER = gcc -Wall -g -o

task1: task1.c generator.c generator.h
	$(COMPILER) task1 generator.c task1.c
	./task1
task2: task2.c
	$(COMPILER) task2 task2.c
	./task2
clean:
	rm -f Spam.txt task1 task2
