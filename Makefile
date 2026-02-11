# NOTE maybe make separate dirs for parallel building
.NOTPARALLEL:
OUTDIR = ../../wasmlite/libc

CC = clang --target=wasm32
WCC = ../../xcc/wcc
SRCS = functions/**/*.c
CFLAGS = -Iinclude -std=c99
OUT = libc-dbg.a libc.a wlibc.a

# TODO -flto breaks float printf
libc.a: CFLAGS += -Oz -Wall -ffast-math #-flto
libc-dbg.a: CFLAGS += -g -Wall
wlibc.a: CC = $(WCC) -Dgoto=void* -D__builtin_trap=abort #-Wall

all: $(OUT) crt1 wcrt0

$(OUT): clean
	$(CC) $(CFLAGS) -c $(SRCS)
	llvm-ar rcs $@ *.o
	cp $@ $(OUTDIR)/lib

clean:
	rm -f *.o $(OUT)
	cp -r platform/example/functions/ platform/example/include/ .
	cp -r include $(OUTDIR)

crt1:
	$(CC) -nostdlib -Wall -Oz -c platform/example/crt1.c -o $(OUTDIR)/lib/crt1.o

wcrt0:
	$(WCC) -nostdlib -Wall -c platform/example/crt1.c -o wcrt0.o
	llvm-ar rcs $(OUTDIR)/lib/wcrt0.a wcrt0.o
	rm wcrt0.o
