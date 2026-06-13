#include <stdio.h>

void	str_reverse(char *s);

int	main(void)
{
	char	a[] = "hello";
	char	b[] = "SBS ANSAN";

	str_reverse(a);
	str_reverse(b);
	printf("%s\n", a);
	printf("%s\n", b);
	return (0);
}

void	str_reverse(char *s)
{
    char a;
    int size;
    for (int i = 0; s[i] != '\0'; i++) {
        size = i;
    }
    for (int i = 0; i <= size / 2; i++) {
        a = s[i];
        s[i] = s[size - i];
        s[size - i] = a;
    }
}