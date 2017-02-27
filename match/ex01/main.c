/* *************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 14:29:51 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/22 16:49:58 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
int		nmatch(char *s1, char *s2);
int		nmatch2(char *s1, char *s2);

int		main(void)
{

	printf("S1 = 'abc'     S2 = 'abc'     Expected = 1    Answer = %i\n", nmatch("abc", "abc"));
	printf("S1 = ''        S2 = ''        Expected = 1    Answer = %i\n", nmatch("", ""));
	printf("S1 = 'abc'     S2 = '*'       Expected = 1    Answer = %i\n", nmatch("abc", "*"));
	printf("S1 = 'abc'     S2 = '**'      Expected = 4    Answer = %i\n", nmatch("abc", "**"));
	printf("S1 = 'abc'     S2 = 'ab'      Expected = 0    Answer = %i\n", nmatch("abc", "ab"));
	printf("S1 = 'abc'     S2 = 'a*t*bc'  Expected = 0    Answer = %i\n", nmatch("abc", "a*t*bc"));
	printf("S1 = 'abc'     S2 = '*****'   Expected = 35   Answer = %i\n", nmatch("abc", "*****"));
	printf("S1 = 'abc'     S2 = '********'Expected = 120  Answer = %i\n", nmatch("abc", "********"));
	printf("S1 = 'abc'     S2 = '****'    Expected = 35   Answer = %i\n", nmatch("abc", "*****"));
	printf("S1 = 'abc'     S2 = 'a***'    Expected = 6    Answer = %i\n", nmatch("abc", "a***"));
	printf("S1 = 'main.c'  S2 = '*.c'     Expected = 1    Answer = %i\n", nmatch("main.c", "*.c"));
	printf("S1 = 'main.c'  S2 = '*.c*'    Expected = 1    Answer = %i\n", nmatch("main.c", "*.c*"));
	printf("S1 = 'main.c'  S2 = '***.c*'  Expected = 15   Answer = %i\n", nmatch("main.c", "***.c*"));
	printf("S1 = 'main.c'  S2 = '**.c**'  Expected = 5    Answer = %i\n", nmatch("main.c", "**.c**"));
	printf("S1 = 'abc   '  S2 = 'ab*c*'   Expected = 1    Answer = %i\n", nmatch("abc   ", "ab*c*"));
	printf("S1 = 'abc'     S2 = 'ab*c*'   Expected = 1    Answer = %i\n", nmatch("abc", "ab*c*"));
	printf("S1 = 'abc'     S2 = 'abc**'   Expected = 1    Answer = %i\n", nmatch("abc", "abc**"));
	printf("S1 = 'super'   S2 = '*s*'     Expected = 1    Answer = %i\n", nmatch("super", "*s*"));
	printf("S1 = 'ch'      S2 = '*ch'     Expected = 1    Answer = %i\n", nmatch("ch", "*ch"));
	printf("S1 = 'abc'     S2 = '***sdf*' Expected = 0    Answer = %i\n", nmatch("abc", "***sdf*"));
	printf("S1 = 'main.c'  S2 = '.c*'     Expected = 0    Answer = %i\n", nmatch("main.c", ".c*"));
	printf("S1 = 'main.c'  S2 = '.c**'    Expected = 0    Answer = %i\n", nmatch("main.c", ".c**"));
	printf("S1 = 'abc'     S2 = '***a'    Expected = 0    Answer = %i\n", nmatch("abc", "***a"));
	printf("S1 = 'abc'     S2 = 'ab'      Expected = 0    Answer = %i\n", nmatch("abc", "ab"));
	printf("S1 = 'abc'     S2 = 'Abc'     Expected = 0    Answer = %i\n", nmatch("abc", "Abc"));
	printf("S1 = 'abc'     S2 = 'A**'     Expected = 0    Answer = %i\n", nmatch("abc", "A**"));
	printf("S1 = 'abc'     S2 = 'a*t*bc'  Expected = 0    Answer = %i\n", nmatch("abc", "a*t*bc"));
	printf("S1 = '*****'   S2 = '**'      Expected = 6    Answer = %i\n", nmatch("*****", "**"));
	printf("S1 = '**'      S2 = '*****'   Expected = 15   Answer = %i\n", nmatch("**", "*****"));


	return (0);
}
