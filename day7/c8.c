#include <stdio.h>

int	is_palindrome(char *s);

int	main(void)
{
	char	a[] = "level";
	char	b[] = "hello";
	char	c[] = "42024";

	printf("\"level\" → %s\n", is_palindrome(a) ? "회문" : "회문 아님");
	printf("\"hello\" → %s\n", is_palindrome(b) ? "회문" : "회문 아님");
	printf("\"42024\" → %s\n", is_palindrome(c) ? "회문" : "회문 아님");
	return (0);
}

int	is_palindrome(char *s)
{
    int size;
    for (int i = 0; s[i] != '\0'; i++) {
        size = i;
    }
    for (int i = 0; i <= size; i++) {
        if (s[i] != s[size - i]) {
            return 0;
        }
    }
    return 1;
}