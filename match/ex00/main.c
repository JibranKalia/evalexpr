/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 14:29:51 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/22 15:11:05 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
int		match(char *s1, char *s2);

int		main(void)
{

	printf("S1 = 'abc'     S2 = 'abc'     Expected = 1 Answer = %i\n", match("abc", "abc"));
	printf("S1 = ''        S2 = ''        Expected = 1 Answer = %i\n", match("", ""));
	printf("S1 = 'abc'     S2 = '*'       Expected = 1 Answer = %i\n", match("abc", "*"));
	printf("S1 = 'abc'     S2 = '**'      Expected = 1 Answer = %i\n", match("abc", "**"));
	printf("S1 = 'abc'     S2 = '*****'   Expected = 1 Answer = %i\n", match("abc", "*****"));
	printf("S1 = 'abc'     S2 = 'a***'    Expected = 1 Answer = %i\n", match("abc", "a***"));
	printf("S1 = 'main.c'  S2 = '*.c'     Expected = 1 Answer = %i\n", match("main.c", "*.c"));
	printf("S1 = 'main.c'  S2 = '*.c*'    Expected = 1 Answer = %i\n", match("main.c", "*.c*"));
	printf("S1 = 'main.c'  S2 = '***.c*'  Expected = 1 Answer = %i\n", match("main.c", "***.c*"));
	printf("S1 = 'main.c'  S2 = '**.c**'  Expected = 1 Answer = %i\n", match("main.c", "**.c**"));
	printf("S1 = 'abc   '  S2 = 'ab*c*'   Expected = 1 Answer = %i\n", match("abc   ", "ab*c*"));
	printf("S1 = 'abc'     S2 = 'ab*c*'   Expected = 1 Answer = %i\n", match("abc", "ab*c*"));
	printf("S1 = 'abc'     S2 = 'abc**'   Expected = 1 Answer = %i\n", match("abc", "abc**"));
	printf("S1 = 'super'   S2 = '*s*'     Expected = 1 Answer = %i\n", match("super", "*s*"));
	printf("S1 = 'ch'      S2 = '*ch'     Expected = 1 Answer = %i\n", match("ch", "*ch"));
    printf("S1 = '*.c'     S2 = '*.c*'    Expected = 1 Answer = %i\n", match("*.c", "*.c*"));
    printf("S1 = '*a**b*'  S2 = '*a*b**'  Expected = 1 Answer = %i\n", match("*a**b*", "*a*b**"));
    printf("S1 = '*****'   S2 = '**'      Expected = 1 Answer = %i\n", match("*****", "**"));
    printf("S1 = '**'      S2 = '****'    Expected = 1 Answer = %i\n", match("**", "****"));
	printf("S1 = 'abc'     S2 = '***sdf*' Expected = 0 Answer = %i\n", match("abc", "***sdf*"));
	printf("S1 = 'main.c'  S2 = '.c*'     Expected = 0 Answer = %i\n", match("main.c", ".c*"));
	printf("S1 = 'main.c'  S2 = '.c**'    Expected = 0 Answer = %i\n", match("main.c", ".c**"));
	printf("S1 = 'abc'     S2 = '***a'    Expected = 0 Answer = %i\n", match("abc", "***a"));
	printf("S1 = 'abc'     S2 = 'ab'      Expected = 0 Answer = %i\n", match("abc", "ab"));
	printf("S1 = 'abc'     S2 = 'Abc'     Expected = 0 Answer = %i\n", match("abc", "Abc"));
	printf("S1 = 'abc'     S2 = 'A**'     Expected = 0 Answer = %i\n", match("abc", "A**"));
	printf("S1 = 'abc'     S2 = 'a*t*bc'  Expected = 0 Answer = %i\n", match("abc", "a*t*bc"));
	printf("S1 = ''        S2 = '*a'      Expected = 0 Answer = %i\n", match("", "*a"));

	return (0);
}
