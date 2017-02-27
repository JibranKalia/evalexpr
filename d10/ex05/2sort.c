int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int rep;

	rep = 0;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			i++;
		else
			return (0);
	}
	return (1);
}
