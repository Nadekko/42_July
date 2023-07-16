CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_FILE = main.c rush01.c ft_putchar.c

OBJ_FILE = $(SRC_FILE:.c=.o) 

rush: $(OBJ_FILE)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJ_FILE) rush
