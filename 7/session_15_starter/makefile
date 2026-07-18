NAME    = libsbs.a

CC      = cc
CFLAGS  = -Wall -Wextra -Werror 
AR      = ar
ARFLAGS = rcs
RM      = rm -f

SRCDIR  = src
OBJDIR  = obj

SRCS    = sbs_isalpha.c sbs_isdigit.c sbs_isalnum.c sbs_isascii.c sbs_isprint.c sbs_toupper.c sbs_tolower.c sbs_memset.c sbs_bzero.c sbs_memcpy.c sbs_memccpy.c sbs_memchr.c sbs_memcmp.c sbs_calloc.c sbs_substr.c sbs_strjoin.c sbs_itoa.c sbs_strdup.c sbs_strlen.c sbs_strlcpy.c sbs_strlcat.c sbs_strnlen.c sbs_strncpy.c sbs_strncat.c sbs_strcmp.c sbs_strcasecmp.c sbs_strncasecmp.c sbs_strchr.c sbs_strrchr.c sbs_strnstr.c sbs_strncmp.c sbs_atoi.c sbs_split.c sbs_free_split.c

OBJS    = $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c libsbs.h | $(OBJDIR)
	$(CC) $(CFLAGS) -I. -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	$(RM) -r $(OBJDIR) main.o

fclean: clean
	$(RM) $(NAME) wordinfo

re: fclean all

.PHONY: all clean fclean re

wordinfo: main.o $(NAME)
	$(CC) $(CFLAGS) main.o -L. -lsbs -o wordinfo

minishell: minishell.o $(NAME)
	$(CC) $(CFLAGS) minishell.o -L. -lsbs -o minishell