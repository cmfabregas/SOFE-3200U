COMPILER = gcc -Wall -g -o 
TARGETS = ARGS CAPFIX

all: $(TARGETS)

	cat ARGS.c && cat CAPFIX.c

	ARGS:  ARGS.c
		$(COMPILER) $@ $@.c
	CAPFIX: ARGS.c
		$(COMPILER) $@ $@.c
clean: 
	rm -f $(TARGETS) *.o

