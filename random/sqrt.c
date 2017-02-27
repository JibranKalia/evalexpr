#include <stdio.h>
#include <math.h>

int		ft_sqrt(int nb)
{
	int		i;
	int 	result; 

	i = 1;

	while (result < nb / 2)
	{
		result = i * i;
		if (result == nb)
		{
			return (i);
		}
		else 
		{
			return (0);
		}	
		i++;
   	}
	return (0);

}


int		main(void)
{
	printf("Sqrt of 4 is: %d, Correct Ans: %f\n", ft_sqrt(4), sqrt(4));
	printf("Sqrt of 535824 is: %d, Correct Ans: %f\n", ft_sqrt(535824), sqrt(535824));
	printf("Sqrt of 41 is: %d, Correct Ans: %f\n", ft_sqrt(41), sqrt(41));
	printf("Sqrt of 36100 is: %d, Correct Ans: %f\n", ft_sqrt(36100), sqrt(36100));
	printf("Sqrt of 144 is: %d, Correct Ans: %f\n", ft_sqrt(144), sqrt(144));
	return (0);
}
