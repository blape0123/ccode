#include <stdio.h>

int	str_compare(char *a, char *b);

int	main(void)
{
	char	a[] = "apple";
	char	b[] = "apple";
	char	c[] = "apply";

	printf("\"apple\" vs \"apple\" → %d\n", str_compare(a, b));
	printf("\"apple\" vs \"apply\" → %d\n", str_compare(a, c));
	printf("\"apply\" vs \"apple\" → %d\n", str_compare(c, a));
	return (0);
}

int	str_compare(char *a, char *b)
{
    int i = 0;

    while (a[i] && (a[i] == b[i])) {
        i++;
    }

    return a[i] - b[i];
}