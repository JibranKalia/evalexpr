#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *array;

	i = min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	array = (int*)malloc(sizeof(int) * (max - min));
	while (i < max)
	{
		array[i - min] = i;
		i++;
	}
	*range = array;
	return (max - min);
}
