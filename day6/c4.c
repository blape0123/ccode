#include <stdio.h>

void	insultion_sort(int *arr, int size);
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
	insultion_sort(arr, 7);
	printf("정렬 후: ");
	print_array(arr, 7);
	return (0);
}

void	insultion_sort(int *arr, int size)
{
    int i;
    int j;
    int key;
    
    i = 1;

    while (i < size) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        i++;
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