# 15차시 실습 파일 — Makefile 만들기

## 오늘의 과제

이 폴더에는 **Makefile이 없습니다.** 그게 여러분이 만들 것입니다.

## 들어있는 파일

| 파일 | 설명 | 건드림? |
|------|------|---------|
| `libsbs.h` | 함수 5개 프로토타입 | ❌ 제공 |
| `sbs_isalpha.c` | 알파벳 판별 (9차시) | ❌ 제공 |
| `sbs_toupper.c` | 대문자 변환 (9차시) | ❌ 제공 |
| `sbs_strlen.c` | 길이 재기 (12차시) | ❌ 제공 |
| `sbs_strdup.c` | 문자열 복제 (11차시) | ❌ 제공 |
| `sbs_strcmp.c` | 문자열 비교 (12차시) | ❌ 제공 |
| `main.c` | wordinfo 프로그램 | ❌ 제공 |
| `minishell.c` | 미니셸 껍데기 (16차시 예고) | ❌ 제공 |
| `tests/test_link.c` | 링크 테스트 | ❌ 제공 |
| `grade.sh` | 채점 스크립트 | ❌ 제공 |
| **`Makefile`** | **빌드 규칙** | ⭐ **직접 작성** |

## 만들어야 할 Makefile 규격

```
변수    : NAME(libsbs.a) WORDINFO(wordinfo) MINISHELL(minishell)
          CC(cc) CFLAGS(-Wall -Wextra -Werror) AR(ar) ARFLAGS(rcs) RM(rm -f)
          SRCS(sbs_*.c 5개) OBJS($(SRCS:.c=.o))

타겟    : all       → libsbs.a
          $(NAME)   → ar rcs로 OBJS 묶기
          %.o: %.c libsbs.h  → 패턴 규칙
          wordinfo  → main.o + libsbs.a 링크 (-L. -lsbs)
          minishell → minishell.o + libsbs.a 링크
          progs     → wordinfo + minishell
          clean     → .o 삭제 (main.o, minishell.o 포함)
          fclean    → clean + libsbs.a + 실행 파일 삭제
          re        → fclean + all
          .PHONY    → all progs clean fclean re
```

**주의**: `SRCS`에 `main.c` / `minishell.c`를 넣지 마세요. 라이브러리에 `main`이 들어가면 안 됩니다.

## 확인 순서

```bash
$ make                  # libsbs.a 생성
$ ar t libsbs.a         # .o 5개 확인
$ make progs            # wordinfo + minishell
$ ./wordinfo hello
$ ./minishell           # exit 또는 Ctrl+D로 종료
$ make re               # 전체 재빌드
$ bash grade.sh         # 6 / 6 목표
```

## 자주 걸리는 함정

- `missing separator` → 레시피를 **탭**으로 들여썼는지 확인 (스페이스 X)
- `undefined reference` → `-lsbs`가 `main.o` **뒤에** 있는지 확인
- `cannot find -lsbs` → `-L.` 빠졌거나 파일 이름이 `libsbs.a`가 아님

강의 노트: https://qkrm.github.io/clang_lecture/session_15/lesson.html
