#include "libsbs.h"

int	main(void)
{
	char	*path = "/home/user/report.final.txt";
	char	*slash;
	char	*dot;
	char	*filename;

	/* TODO 1: sbs_strrchr로 마지막 '/' 찾기 */
	slash = sbs_strrchr(path, '/');
	/* TODO 2: slash가 있으면 파일명은 slash + 1, 없으면 path 전체 */
    if (!slash) {
        filename = path;
    }
    else {
        filename =  slash + 1;
    }
	/* TODO 3: filename에서 sbs_strrchr로 마지막 '.' 찾기 */
	dot = sbs_strrchr(filename, '.');
	/* TODO 4: dot 있으면 "파일명: ..., 확장자: ..." / 없으면 "확장자 없음" 출력 */
    if (!dot) {
        printf("확장자 없음\n");
    }
    else {
        printf("파일명: %s, 확장자: %s\n", filename, dot + 1);
    }
	return (0);
}