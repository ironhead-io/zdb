# zdb
NAME = zdb
CC = clang
CFLAGS = -Wall -Werror -std=c99 -Wno-unused
SRC = ztable.c zwalker.c zdb.c

main:
	$(CC) $(CFLAGS) -o $(NAME)-test $(SRC) main.c

postgres:
	printf ''

mysql:
	printf ''

sqlite3:
	printf ''

oracle:
	printf ''

sqlserver:
	printf ''

debug: CFLAGS = -g -O0 -fsanitize=address -fsanitize-undefined-trap-on-error -Wall -Werror -std=c99 -Wno-unused -DDEBUG_H
debug:
	$(CC) $(CFLAGS) -o $(NAME)-test $(SRC) main.c

examples:
	$(CC) $(CFLAGS) -o ex example.c zdb.c vendor/zhasher.c vendor/zwalker.c

clean:
	rm -f *.o vendor/*.o $(NAME)-test
