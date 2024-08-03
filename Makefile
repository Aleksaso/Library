#Nombre de la biblioteca
NAME = libft.a

#Directorios
SRCDIR = src
INCDIR = includes
OBJDIR = obj

#Archivos fuente sin las rutas
SRC_FILES =	ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_strnstr.c\
			ft_atoi.c\
			ft_calloc.c\
			ft_strdup.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_split.c\
			ft_itoa.c\
			ft_strmapi.c\
			ft_striteri.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_printf.c\
			ft_char.c\
			ft_ptro.c\
			ft_simbol.c\
			ft_etri.c\
			ft_hexdma.c\
			ft_str.c\
			ft_hexd.c\
			ft_nbru.c\
			ft_putnbr.c\
			ft_nbrd.c\
			get_next_line.c\
			get_next_line_utils.c\


BONUS_FILES =	ft_lstnew_bonus.c\
				ft_lstadd_front_bonus.c\
				ft_lstsize_bonus.c\
				ft_lstlast_bonus.c\
				ft_lstadd_back_bonus.c\
				ft_lstdelone_bonus.c\
				ft_lstclear_bonus.c\
				ft_lstiter_bonus.c\
				ft_lstmap_bonus.c

#Agregar las rutas a los archivos fuente
SRC = $(addprefix $(SRCDIR)/, $(SRC_FILES))
BONUS_SRC = $(addprefix $(SRCDIR)/, $(BONUS_FILES))

#Archivos objeto
OBJS = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)
BONUS_OBJS = $(BONUS_SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

#Banderas del copilador
CFLAGS = -Wall -Wextra -Werror -I $(INCDIR)

all : $(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BONUS_OBJS)
	@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
