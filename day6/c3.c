#include <stdio.h>

void	sellect_sort(int *arr, int size);
void	print_array(int *arr, int size);

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
	sellect_sort(arr, 7);
	printf("정렬 후: ");
	print_array(arr, 7);
	return (0);
}

void	sellect_sort(int *arr, int size)
{
    for (int b = 0; b < size - 1; b++) {
        int num = b;
        int tmp;
        for (int a = b + 1; a < size - 1; a++) {
            if (arr[num] > arr[a]) {
                num = a;
            }
        }
        if (num != b) {
            tmp = arr[b];
            arr[b] = arr[num];
            arr[num] = tmp;
        }
    }
    
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