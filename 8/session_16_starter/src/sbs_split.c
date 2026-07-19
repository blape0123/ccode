#include "libsbs.h"
#include <stdlib.h>

/*
 * TODO(과제 1~2): 문자열 s를 구분자 c로 쪼개 char ** 배열을 만든다.
 *  - 연속·앞뒤 구분자는 무시 (빈 단어 안 만듦)
 *  - 배열 끝은 NULL, 크기는 단어 수 + 1
 *  - 각 단어는 sbs_substr로 복사 (11차시 함수 재사용)
 *  - s == NULL이면 NULL
 * 힌트는 실습 페이지 과제 1~2 참고.
 */

/* 과제 1: 구분자로 나뉜 단어 개수를 센다 */
static size_t	count_words(const char *s, char c)
{
	size_t count = 0;
	size_t i = 0;

	while(s[i]) {
		while (s[i] == c){
			i++;
		}
		if(s[i]) {
			count++;
			while(s[i] && s[i] != c) {
				i++;
			}
		}
		
	}
	return (count);
}

/* 실패 시 지금까지 만든 단어 n개 + 배열을 해제 */
static void	free_partial(char **arr, size_t n)
{
	while (n > 0)
		free(arr[--n]);
	free(arr);
}

char	**sbs_split(const char *s, char c)
{
	char **arr;
	size_t words, i, start, k;
	
	if(s == NULL) {
		return NULL;
	}

	words = count_words(s, c);

	arr = (char**)malloc(sizeof(char *) * (words + 1));

	if(arr == NULL) {
		return NULL;
	}

	i = 0;
	k = 0;

	while(k < words) {
		while(s[i] == c) {
			i++;
		}
		start = i;
		while(s[i] && s[i] != c) {
			i++;
		}
		arr[k] = sbs_substr(s, start, i - start);
		if(arr[k] == NULL) {
			return(free_partial(arr, k), NULL);
		}
		k++;
	}

	arr[k] = NULL;
	
	return (arr);
}
