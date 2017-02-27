
#include <stdio.h>
#include <unistd.h>

int		ft_ultimate_range(int **range, int min, int max);


int		main(void)
{
	int	min;
	int max;
	int *arange;
	int result;
	int len;
	int	i;

	min = -3;
	max = 5;
	len = max - min;

	result = ft_ultimate_range(&range, min, max);
	printf("pointer: %x\n", (unsigned int)range);
	for (i = 0; i  < len; i++)
		printf("%d, ", range[i]);

	printf("\nrange=%d", result);
	return (0);
}
