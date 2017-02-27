void	ft_putchar(char c);

void	ft_toprow(int column, int x)
{
	if (column == 0 || column == x - 1)
		ft_putchar('o');
	else
		ft_putchar('-');

}

void	ft_middle_row(int column, int x)
{
	if (column == 0 || column == x - 1)
		ft_putchar('|');
	else
		ft_putchar(' ');
}


void    rush(int x, int y)
{
	int row;
	int column;

	row = 0;
	column = 0;

	while (row < y)
	{
		while (column < x)
		{
			if (row == 0 || row == y - 1)
				ft_toprow(column, x);
			else
				ft_middle_row(column, x);

			column++;
		}
		column = 0;
		row++;
		ft_putchar('\n');
	}

}
