/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 21:09:13 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/19 16:09:22 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
int		ft_print_params(int n, char **str);

int		main(int argc, char **argv)
{
	int		i;
	int		n;
	int		k;
	char	*temp;

	i = 0;
	n = 1;
	k = 0;
	while (i < argc)
	{
		while ((n + 1) < argc)
		{
			k = ft_strcmp(argv[n], argv[n + 1]);
			if (k > 0)
			{
				temp = argv[n];
				argv[n] = argv[n + 1];
				argv[n + 1] = temp;
			}
			n++;
		}
		n = 1;
		i++;
	}
	ft_print_params(argc, argv);
}

int		ft_print_params(int n, char **str)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (i < n)
	{
		while (str[i][j] != '\0')
		{
			ft_putchar(str[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
		if (s1[i] == '\0')
			return (0);
	}
	return (s1[i] - s2[i]);
}
