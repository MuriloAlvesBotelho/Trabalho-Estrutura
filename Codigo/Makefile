CFLAGS = -std=c11 -Wall -Wextra -Wpedantic -O2
OBJETOS = main.o produto.o simples.o dupla.o circular.o

estoque: $(OBJETOS)
	$(CC) $(CFLAGS) -o $@ $(OBJETOS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJETOS) estoque

.PHONY: clean
