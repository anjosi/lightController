
IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)
BIN=light_ctrl

ODIR=obj
LDIR =../lib

LIBS=
_DEPS=toggle_switch.h types.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))
_OBJ=main.o toggle_switch.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(OBJ)
	gcc -o $(BIN) $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 

cleanAll: clean
	rm -f ./$(BIN)

