#include <stdio.h>

int	count_words(char *s);

int	main(void)
{
	char	a[] = "hello world";
	char	b[] = "  SBS  ANSAN  C  ";
	char	c[] = "oneword";

	printf("\"hello world\" → %d\n", count_words(a));
	printf("\"  SBS  ANSAN  C  \" → %d\n", count_words(b));
	printf("\"oneword\" → %d\n", count_words(c));
	return (0);
}

int	count_words(char *s)
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0')) {
            count++;
        }
    }
    return count;
}