#include <stdio.h>

int	is_vowel(char c);
int	count_vowels(char *s);

int	main(void)
{
	char	a[] = "Hello World";
	char	b[] = "AEIOU";
	char	c[] = "xyz";

	printf("\"Hello World\" → %d\n", count_vowels(a));
	printf("\"AEIOU\" → %d\n", count_vowels(b));
	printf("\"xyz\" → %d\n", count_vowels(c));
	return (0);
}



int	count_vowels(char *s)
{
    int count = 0;
    char v[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; s[i] != '\0'; i++) {
        for (int j = 0; j < 10; j++) {
            if (s[i] == v[j]) {
                count++;
            }
        }
    }
    return count;
}