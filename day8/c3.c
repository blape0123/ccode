#include <stdio.h>

typedef struct s_student
{
	char	name[20];
	int		age;
	int		score;
}	t_student;

double		average(t_student *arr, int size);
t_student	*find_top(t_student *arr, int size);
t_student	*find_low(t_student *arr, int size);

int	main(void)
{
	t_student	class[5] = {
		{"Kim", 20, 95},
		{"Lee", 21, 88},
		{"Park", 22, 77},
		{"Choi", 20, 85},
		{"Jung", 23, 85}
	};
	t_student	*top;
    t_student	*low;

	top = find_top(class, 3);
	low = find_low(class, 5);
	printf("평균: %.1f점\n", average(class, 5));
	printf("최고: %s (%d점)\n", top->name, top->score);
	printf("최저: %s (%d점)\n", low->name, low->score);
	return (0);
}

t_student	*find_top(t_student *arr, int size)
{
    t_student *num;
    num = &arr[0];
	for (int i = 1; i < size; i++) {
        if (arr[i].score > num->score) {
            num = &arr[i];
        }
    }
    return num;
}

double	average(t_student *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i].score;
    }
    return (double)sum / size;
}

t_student	*find_low(t_student *arr, int size)
{
    t_student *num;
    num = &arr[0];
	for (int i = 1; i < size; i++) {
        if (arr[i].score < num->score) {
            num = &arr[i];
        }
    }
    return num;
}