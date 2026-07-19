#include <stdio.h>
#include <stdlib.h>
#include "libsbs.h"

/*
 * minishell (16차시 종합 프로젝트) — 스켈레톤
 *
 * 채울 곳: builtin_echo / builtin_upper / builtin_len / builtin_help
 *          run_command 의 디스패치, main 의 split/free 연결
 * 힌트는 실습 페이지 과제 4~5 참고.
 */

#define BUF_SIZE 1024

static void	strip_newline(char *line)
{
	size_t	len;

	len = sbs_strlen(line);
	if (len > 0 && line[len - 1] == '\n')
		line[len - 1] = '\0';
}

/* 과제 4: args[1]부터 공백으로 이어 출력 */
static void	builtin_echo(char **args)
{
	size_t i = 1;
	
	while (args[i])
    {
        printf("%s", args[i]);
        if (args[i + 1])
            printf(" ");
        i++;
    }
    printf("\n");
}

/* 과제 4: 각 글자를 sbs_toupper로 대문자 출력 */
static void	builtin_upper(char **args)
{
	size_t i = 1, j;
    while (args[i])
    {
        j = 0;
        while (args[i][j])
        {
            printf("%c", sbs_toupper((unsigned char)args[i][j]));
            j++;
        }
        if (args[i + 1])
            printf(" ");
        i++;
    }
    printf("\n");
}

/* 과제 4: 각 인자를 sbs_strlen으로 길이 출력 */
static void	builtin_len(char **args)
{
	size_t i = 1;
	while (args[i] != NULL)
	{
		printf("%s: %ld", args[i], sbs_strlen(args[i]));
		if(args[i + 1]) {
			printf(" ");
		}
		i++;
	}
	printf("\n");
}

/* 과제 4: 명령 목록 출력 */
static void	builtin_help(void)
{
	printf("사용 가능한 명령:\n");
    printf("  echo   [말...]  입력한 말을 그대로 출력\n");
    printf("  upper  [말...]  대문자로 출력\n");
    printf("  len    [말...]  각 말의 길이 출력\n");
    printf("  help            이 도움말\n");
    printf("  exit            종료\n");
}

/*
 * 과제 5: 명령 해석 + 실행.
 *   - args[0] == NULL(빈 줄)을 가장 먼저 검사
 *   - exit면 1 반환(종료 신호), 그 외 0
 *   - 없는 명령은 "minishell: 이름: command not found"
 */
static int	run_command(char **args)
{
	if (args[0] == NULL)               // 빈 줄(공백만 입력)
        return (0);
    if (sbs_strcmp(args[0], "exit") == 0)
        return (1);                    // 1 = 종료 신호
    if (sbs_strcmp(args[0], "echo") == 0)
        builtin_echo(args);
    else if (sbs_strcmp(args[0], "upper") == 0)
        builtin_upper(args);
    else if (sbs_strcmp(args[0], "len") == 0)
        builtin_len(args);
    else if (sbs_strcmp(args[0], "help") == 0)
        builtin_help();
    else
        printf("minishell: %s: command not found\n", args[0]);
    return (0);
}

int	main(void)
{
	char	line[BUF_SIZE];
	char	**args;
	int		done;

	done = 0;
	while (!done)
	{
		printf("minishell$ ");
		fflush(stdout);
		if (fgets(line, BUF_SIZE, stdin) == NULL)
		{
			printf("\n");
			break ;
		}
		strip_newline(line);
		args = sbs_split(line, ' ');/* TODO(과제 5): split → run_command → free_split */
		if(args == NULL) {
			break;
		}
		done = run_command(args);
		sbs_free_split(args);
	}
	printf("bye\n");
	return (0);
}
