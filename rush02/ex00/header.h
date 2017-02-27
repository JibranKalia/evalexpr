/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhramut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 12:27:14 by akhramut          #+#    #+#             */
/*   Updated: 2017/01/29 15:04:16 by akhramut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>
# define BUF_SIZE 1000

int		ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
int		check_rush00(char *str, int x, int y);
int		check_rush01(char *str, int x, int y);
int		check_rush02(char *str, int x, int y);
int		check_rush03(char *str, int x, int y);
int		check_rush04(char *str, int x, int y);

#endif
