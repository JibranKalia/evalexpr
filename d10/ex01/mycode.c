#include <stdio.h> 

int	compare(int  a, int b)
{
	return abs(a) - abs(b);
}

void sort (int *A, int n, int (*compare)(int, int))
{
	int i;
	int j;
	int temp;

	i = 0;
	j = 0;
	
	while (i < n)
	{
		while (j < n - 1)
		{
			if (compare(A[j], A[j + 1]) > 0)
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
			j++;
		}
		j = 0;	
		i++;
	}
}

int		main(void)
{
	int A[] = {2, -22, 21, -1, 5, -3};
	sort(A, 6, compare);

	for (int i = 0; i < 6; i++)
		printf("%d, ", A[i]);
}
