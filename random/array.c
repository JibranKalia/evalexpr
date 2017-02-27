#include <unistd.h> 
#include <stdio.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);

	return (0);
}

int		main(void)
{
	int tab1[10];
	int tab2[10];

	int *tabptr[2];

	tabptr[0] = tab1;

//	tabptr[0][4]= 42;
	*(*(tabptr + 0) + 4) = 42;

	printf("%d \n", tab1[4]);
	ft_putchar(tab1[4]);

	return (0);
}
