#include <stdio.h>

typedef struct s_time
{
	int	hour;
	int	min;
}	t_time;

void	add_minutes(t_time *t, int m);

int	main(void)
{
	t_time	a = {10, 30};
	t_time	b = {23, 50};
	t_time	c = {9, 5};

	add_minutes(&a, 45);
	printf("10:30 + 45분 = %02d:%02d\n", a.hour, a.min);
	add_minutes(&b, 20);
	printf("23:50 + 20분 = %02d:%02d\n", b.hour, b.min);
	add_minutes(&c, 130);
	printf("09:05 + 130분 = %02d:%02d\n", c.hour, c.min);
	return (0);
}

void	add_minutes(t_time *t, int m)
{
    t->min += m;
    t->hour += t->min / 60;
    t->min %= 60;
    t->hour %= 24;
}