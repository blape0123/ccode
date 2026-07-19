#include "libsbs.h"
#include <stdlib.h>

/*
 * TODO(과제 3): sbs_split이 만든 배열을 통째로 해제한다.
 *  - 각 단어(문자열)를 먼저 free
 *  - 마지막에 배열 자체를 free
 *  - NULL을 넣어도 안전
 * 순서 주의: 배열을 먼저 free하면 단어 주소를 잃는다.
 */
void	sbs_free_split(char **arr)
{
	size_t i;

	if (arr == NULL)
		return ;
	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
