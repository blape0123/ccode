#include <stdio.h>

void	print_array(int *arr, int size);

/* swap: 두 원소 교환 (포인터로 원본 직접 변경) */
void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
   partition (Lomuto 방식):
   - 맨 오른쪽 arr[high]를 기준(pivot)으로 정한다.
   - i = "pivot보다 작은 값들의 경계". low-1에서 시작.
   - j로 low..high-1을 훑으며 pivot보다 작은 값을 만나면
     i를 한 칸 늘리고 그 자리로 끌어온다.
   - 마지막에 pivot을 경계 바로 다음(i+1)에 꽂는다.
   - 반환값 = pivot이 최종적으로 놓인 자리(인덱스).
     이 자리는 정렬 완료 — 왼쪽은 전부 작고 오른쪽은 전부 크다.
*/
int	partition(int *arr, int low, int high)
{
	int	pivot;
	int	i;
	int	j;

	pivot = arr[high];
	i = low - 1;
	j = low;
	while (j < high)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
		j++;
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

/*
   quick_sort:
   - 구간 [low, high]를 partition으로 둘로 쪼갠다.
   - pivot 자리(pi) 기준 왼쪽/오른쪽을 각각 재귀 정렬.
   - low >= high면 원소 0~1개라 정렬 끝 (재귀 종료 조건).
   분할정복(divide & conquer): 큰 문제를 작은 문제로 쪼개 푼다.
*/
void	quick_sort(int *arr, int low, int high)
{
	int	pi;

	if (low < high)
	{
		pi = partition(arr, low, high);
		quick_sort(arr, low, pi - 1);
		quick_sort(arr, pi + 1, high);
	}
}

int	main(void)
{
	int	arr[7];

	arr[0] = 5;
	arr[1] = 2;
	arr[2] = 9;
	arr[3] = 1;
	arr[4] = 7;
	arr[5] = 3;
	arr[6] = 8;
	printf("정렬 전: ");
	print_array(arr, 7);
	quick_sort(arr, 0, 7 - 1);   /* 인덱스 기준: 0 ~ size-1 */
	printf("정렬 후: ");
	print_array(arr, 7);
	return (0);
}

void	print_array(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}
