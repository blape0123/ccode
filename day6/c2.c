#include <stdio.h>

void	bubble_sort(int *arr, int size);
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
	bubble_sort(arr, 7);
	printf("정렬 후: ");
	print_array(arr, 7);
	return (0);
}

void	bubble_sort(int *arr, int size)
{
    for (int a = 0; a < size - 1; a++) {
        for (int i = 0; i < size - 1 - a; i++) {
            if (arr[i] > arr[i + 1]) {
                int a = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = a;
            }
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