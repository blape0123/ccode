#include "libsbs.h"
#include <stdio.h>

static size_t	str_len(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
    {
        i++;
    }
    
	return (i);
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	result;

	result = 0;
	/* TODO 1: argc != 4 이거나 argv[2]가 한 글자가 아니면 사용법 출력 후 return 1 */
    if (argc != 4 || argv[2][1] != '\0') {
        printf("입력이 잘못되었습니다.\n");
        return 1;
    }
	a = sbs_atoi(argv[1]);
	b = sbs_atoi(argv[3]);
	/* TODO 2: sbs_strncmp로 argv[2]가 +,-,*,/ 중 무엇인지 판별해 계산 */
    if(*argv[2] == '+') {
        result = a + b;
    }
    else if(*argv[2] == '-') {
        result = a - b;
    }
    else if(*argv[2] == '*') {
        result = a * b;
    }
    else if(*argv[2] == '/') {
        if(b == 0) {
            printf("error\n");
            return 1;
        }
        result = a / b;
    }
	/* TODO 3: 나눗셈일 때 b == 0이면 에러 출력 후 return 1 */
	printf("%d %s %d = %d\n", a, argv[2], b, result);
	return (0);
}