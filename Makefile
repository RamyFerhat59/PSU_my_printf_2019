##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

NAME		= libmy.a

CC		= gcc

SRC		= my_printf.c\
		  my_putchar.c\
		  my_putnbr_base.c\
		  my_putstr.c\
		  my_strlen.c\
	      my_put_nbr.c\
		  my_putnbrbi_base.c
		
OBJ		= $(SRC:.c=.o)

all:	$(NAME)

$(NAME):$(OBJ)
	ar rc $(NAME) $(OBJ)


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
