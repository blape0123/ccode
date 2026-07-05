#include "libsbs.h"
#include <stdio.h>

/* s의 idx 위치부터 다음 '.' 전까지를 숫자로 변환하고, idx를 다음 부분으로 이동 */
static int	next_part(const char *s, int *idx)
{
	int	start;
	int	value;

	start = *idx;
	/* TODO 1: *idx를 '.' 또는 '\0'까지 전진 */
    while(s[*idx] != '.' && s[*idx] != '\0') {
        (*idx)++;
    }
	value = sbs_atoi(s + start);
	/* TODO 2: 지금 위치가 '.'이면 한 칸 더 전진(다음 부분의 시작) */
    if (s[*idx] == '.') {
        (*idx)++;
    }
	return (value);
}

static int	compare_version(const char *a, const char *b)
{
	int	ia;
	int	ib;

	ia = 0;
	ib = 0;

    int va;
    int vb;
    
	while (a[ia] || b[ib])
	{
		/* TODO 3: next_part로 양쪽에서 숫자 하나씩 꺼내 비교.
		           다르면 그 차이를 반환 */
		va = next_part(a, &ia);
        vb = next_part(b, &ib);
        if(va != vb) {
            return va - vb;
        }
	}
	return (0);
}

int	main(void)
{
	char	*v1 = "1.2.3";
	char	*v2 = "1.10.0";
	int		cmp;

	cmp = compare_version(v1, v2);
	/* TODO 4: cmp 부호에 따라 "<", ">", "==" 출력 */
    if(cmp > 0) {
        printf("%s > %s\n", v1, v2);
    }
    else if(cmp < 0) {
        printf("%s < %s\n", v1, v2);
    }
    else {
        printf("%s = %s\n", v1, v2);
    }
	return (0);
}