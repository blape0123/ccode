# 16차시 실습 파일 — 미니셸 만들기

## 폴더 구조

```
src/    libsbs 소스(sbs_*.c) — 여기서 split을 채운다
obj/    make가 자동 생성 (.o 저장)
./      libsbs.h, minishell.c, Makefile, grade.sh, tests/
```

## 채울 파일 (⭐)

| 파일 | 할 일 |
|------|-------|
| `src/sbs_split.c` | 과제 1~2: 문자열을 단어 배열로 쪼개기 |
| `src/sbs_free_split.c` | 과제 3: char ** 2단계 해제 |
| `minishell.c` | 과제 4~5: 내장 명령 + 디스패치 + 메인 루프 |

나머지 `src/sbs_*.c` 32개 · `libsbs.h` · `Makefile` · `tests/` · `grade.sh`는 제공.

## 순서

```bash
$ unzip session_16_starter.zip
$ cd session_16_starter

# 1) split 먼저 완성 → 단위 테스트
$ make
$ cc -Wall -Wextra -Werror -I. tests/test_split.c -L. -lsbs -o tsplit
$ ./tsplit          # 목표: SPLIT_OK

# 2) minishell 내장 명령 완성
$ make minishell
$ ./minishell
minishell$ echo hello world
hello world
minishell$ exit
bye

# 3) 채점
$ bash grade.sh     # 목표: 5 / 5
```

## 규칙

- `sbs_split.c`는 `<string.h>`/`<strings.h>` 금지. `<stdlib.h>`(malloc)는 허용.
- `minishell.c`는 `SRCS`에 넣지 않는다 (main이 있으니 라이브러리가 아니라 프로그램).
- split 배열 끝은 `NULL`, 크기는 단어 수 + 1.
- `char **` 해제는 단어부터, 배열은 마지막.

## 자주 걸리는 함정

- `multiple definition of main` → minishell.c를 SRCS에 넣었다
- `undefined reference: sbs_split` → SRCS에 sbs_split.c 추가, `-lsbs`는 소스 뒤
- 빈 줄 입력 시 크래시 → run_command에서 `args[0] == NULL` 먼저 검사
- valgrind 누수 → 루프에서 `sbs_free_split(args)` 빠짐

강의 노트: https://qkrm.github.io/clang_lecture/session_16/lesson.html
