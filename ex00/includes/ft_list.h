/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 17:01:08 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/29 14:01:25 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <unistd.h> 
# include <stdlib.h> 
# include <stdio.h> // DONT FORGET TO REMOVE 

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	**ft_split_whitespaces(char *str);
int		eval_expr(char *str);
char	*ft_addspace(char *str, int len, int j);
int		ft_total_str_len(char *str);
char	*ft_infix(char *str, int len);
int		ft_posteval(char *str, int len);
int		precd(char x);
#endif
