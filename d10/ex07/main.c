#include <stdio.h>

void ft_sort_wordtab(char **tab);

int	main()
{
	int i = 0;
	char *tab[6] = {"kurvi", "zoo", "gluposti", "apansas", "citron"};

	ft_sort_wordtab(tab);
	while (i < 5)
	{
		printf("%s, ", tab[i]);
		i++;
	}
	return (0);
}
