NAME    = libsbs.a

CC      = cc
CFLAGS  = -Wall -Wextra -Werror 
AR      = ar
ARFLAGS = rcs
RM      = rm -f

SRCDIR  = src
OBJDIR  = obj

SRCS    = $(SRCDIR)/sbs_isalpha.c $(SRCDIR)/sbs_toupper.c $(SRCDIR)/sbs_strlen.c $(SRCDIR)/sbs_strdup.c $(SRCDIR)/sbs_strcmp.c

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