
SRC=math.c develop.c contrib.c sockets.c 
OBJ=math.$(O) develop.$(O) contrib.$(O) sockets.$(O) 

.c.$(O):
	$(CC) $(CFLAGS) -I.. -c $*.c

all: $(OBJ)
	ar rcu packages.$(A) $(OBJ)
	$(RANLIB) packages.$(A)

db.$(O): db.c
	$(CC) $(CFLAGS) -I.. -I/usr/include/mysql -c $*.c

clean:
	rm -f *.$(O)
	rm -f packages.$(A)
