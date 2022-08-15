all: htoi btn rmblank squeeze btn_repr

htoi: htoi.o
	$(CC) -o htoi htoi.o

btn: btn.o
	$(CC) -o btn btn.o

rmblank: rmblank.o
	$(CC) -o rmblank rmblank.o

squeeze: squeeze.o
	$(CC) -o squeeze squeeze.o

btn_repr: btn_repr.o
	$(CC) -o btn_repr btn_repr.o

htoi.o: htoi.c def.h
	$(CC) -c htoi.c

squeeze.o: squeeze.c def.h
	$(CC) -c squeeze.c

btn.o: btn.c def.h
	$(CC) -c btn.c

rmblank.o: rmblank.c def.h
	$(CC) -c rmblank.c

btn_repr.o: btn_repr.c def.h
	$(CC) -c btn_repr.c

clean:
	rm *.o; rm squeeze; rm htoi; rm btn; rm rmblank; rm btn_repr
