#include <stdio.h>

int	str_length(char *s);

int	main(void)
{
	char	a[] = "hello";
	char	b[] = "";
	char	c[] = "SBS ANSAN";

	printf("\"hello\" → %d\n", str_length(a));
	printf("\"\" → %d\n", str_length(b));
	printf("\"SBS ANSAN\" → %d\n", str_length(c));
	return (0);
}

int	str_length(char *s)
{
	int i;
    for (i = 0; s[i] != '\0'; i++) {}
    return i;
}
