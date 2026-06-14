#include <stdio.h>

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

t_point	centroid(t_point *arr, int size);

int	main(void)
{
	t_point	pts[4] = {
		{0, 0},
		{4, 0},
		{0, 6},
		{4, 6}
	};
	t_point	c;

	c = centroid(pts, 4);
	printf("점 4개의 무게중심 = (%d, %d)\n", c.x, c.y);
	return (0);
}

t_point	centroid(t_point *arr, int size)
{
	int sum_x = 0;
    int sum_y = 0;
    for (int i = 0; i < size; i++) {
        sum_x += arr[i].x;
        sum_y += arr[i].y;
    }
    sum_x = (int)(sum_x / size);
    sum_y = (int)(sum_y / size);
    
    t_point p = {sum_x, sum_y};
    return p;
}