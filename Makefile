CC=cc
CFLAGS=-Wall -g
EXE=xtea_encode xtea_decode

all: $(EXE)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.o $(EXE)
