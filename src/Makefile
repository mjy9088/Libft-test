NAME = libft.a

.PHONY: all
all: $(NAME)

.PHONY: clean
clean:
	rm -f *.o

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean
	$(MAKE) all

$(NAME): ft_1_ctype.o ft_2_memory.o ft_3_find.o ft_4_string1.o ft_4_string2.o ft_5_etc.o ft_6_string.o ft_7_print.o ft_8_etc.o
	$(AR) $(ARFLAGS) $@ $^
