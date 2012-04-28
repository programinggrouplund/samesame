CC=g++
CFLAGS=-O2 -s
OBJS= main.o option.o

samesame: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

.c.o:
	$(CC) $(CFLAGS) -c $<

###############
clean:
	-rm -f $(OBJS)
	-rm -f *~ core *.core
