/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_header.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 15:47:53 by jkalia            #+#    #+#             */
/*   Updated: 2017/02/01 20:49:44 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_HEADER_H
# define MAP_HEADER_H
# define BUFFER_SIZE 200000000

char	g_empty;
char	g_obstacle;
char	g_full;
int		g_size;
int		g_width;
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	std_input(char *str);
void	print_solution(char **map, int x, int y, int size);
void	print_map(char **map);
int		solve_map(char *str);
int		check_inside(char **map, int x, int y, int size);
int		error(void);
#endif
