CC = gcc
CFLAGS = -Wall -Wextra -std=c11

app: main.c
	$(CC) $(CFLAGS) main.c -o app

clean:
	rm -f app

.PHONY: clean
