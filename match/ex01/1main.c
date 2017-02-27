/* *************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 14:29:51 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/22 15:11:56 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
int		nmatch(char *s1, char *s2);
int		nmatch2(char *s1, char *s2);

int		main(void)
{

	printf("S1 = 'abc'     S2 = 'abc'     Expected = %i Answer = %i\n", nmatch2("abc", "abc"), nmatch("abc", "abc"));
	printf("S1 = ''        S2 = ''        Expected = %i Answer = %i\n", nmatch2("", ""), nmatch("", ""));
	printf("S1 = 'abc'     S2 = '*'       Expected = %i Answer = %i\n", nmatch2("abc", "*"), nmatch("abc", "*"));
	printf("S1 = 'abc'     S2 = '**'      Expected = %i Answer = %i\n", nmatch2("abc", "**"), nmatch("abc", "**"));
	printf("S1 = 'abc'     S2 = 'ab'      Expected = %i Answer = %i\n", nmatch2("abc", "ab"), nmatch("abc", "ab"));
	printf("S1 = 'abc'     S2 = 'a*t*bc'  Expected = %i Answer = %i\n", nmatch2("abc", "a*t*bc"), nmatch("abc", "a*t*bc"));
	printf("S1 = 'abc'     S2 = '*****'   Expected = %i Answer = %i\n", nmatch2("abc", "*****"), nmatch("abc", "*****"));
	printf("S1 = 'abc'     S2 = '********'Expected = %i Answer = %i\n", nmatch2("abc", "********"), nmatch("abc", "********"));
	printf("S1 = 'abc'     S2 = '****'    Expected = %i Answer = %i\n", nmatch2("abc", "*****"), nmatch("abc", "*****"));
	printf("S1 = 'abc'     S2 = 'a***'    Expected = %i Answer = %i\n", nmatch2("abc", "a***"), nmatch("abc", "a***"));
	printf("S1 = 'main.c'  S2 = '*.c'     Expected = %i Answer = %i\n", nmatch2("main.c", "*.c"), nmatch("main.c", "*.c"));
	printf("S1 = 'main.c'  S2 = '*.c*'    Expected = %i Answer = %i\n", nmatch2("main.c", "*.c*"), nmatch("main.c", "*.c*"));
	printf("S1 = 'main.c'  S2 = '***.c*'  Expected = %i Answer = %i\n", nmatch2("main.c", "***.c*"), nmatch("main.c", "***.c*"));
	printf("S1 = 'main.c'  S2 = '**.c**'  Expected = %i Answer = %i\n", nmatch2("main.c", "**.c**"), nmatch("main.c", "**.c**"));
	printf("S1 = 'abc   '  S2 = 'ab*c*'   Expected = %i Answer = %i\n", nmatch2("abc   ", "ab*c*"), nmatch("abc   ", "ab*c*"));
	printf("S1 = 'abc'     S2 = 'ab*c*'   Expected = %i Answer = %i\n", nmatch2("abc", "ab*c*"), nmatch("abc", "ab*c*"));
	printf("S1 = 'abc'     S2 = 'abc**'   Expected = %i Answer = %i\n", nmatch2("abc", "abc**"), nmatch("abc", "abc**"));
	printf("S1 = 'super'   S2 = '*s*'     Expected = %i Answer = %i\n", nmatch2("super", "*s*"), nmatch("super", "*s*"));
	printf("S1 = 'ch'      S2 = '*ch'     Expected = %i Answer = %i\n", nmatch2("ch", "*ch"), nmatch("ch", "*ch"));
	printf("S1 = 'abc'     S2 = '***sdf*' Expected = %i Answer = %i\n", nmatch2("abc", "***sdf*"), nmatch("abc", "***sdf*"));
	printf("S1 = 'main.c'  S2 = '.c*'     Expected = %i Answer = %i\n", nmatch2("main.c", ".c*"), nmatch("main.c", ".c*"));
	printf("S1 = 'main.c'  S2 = '.c**'    Expected = %i Answer = %i\n", nmatch2("main.c", ".c**"), nmatch("main.c", ".c**"));
	printf("S1 = 'abc'     S2 = '***a'    Expected = %i Answer = %i\n", nmatch2("abc", "***a"), nmatch("abc", "***a"));
	printf("S1 = 'abc'     S2 = 'ab'      Expected = %i Answer = %i\n", nmatch2("abc", "ab"), nmatch("abc", "ab"));
	printf("S1 = 'abc'     S2 = 'Abc'     Expected = %i Answer = %i\n", nmatch2("abc", "Abc"), nmatch("abc", "Abc"));
	printf("S1 = 'abc'     S2 = 'A**'     Expected = %i Answer = %i\n", nmatch2("abc", "A**"), nmatch("abc", "A**"));
	printf("S1 = 'abc'     S2 = 'a*t*bc'  Expected = %i Answer = %i\n", nmatch2("abc", "a*t*bc"), nmatch("abc", "a*t*bc"));
	printf("S1 = '*****'   S2 = '**'      Expected = %i Answer = %i\n", nmatch2("*****", "**"), nmatch("*****", "**"));
	printf("S1 = '**'      S2 = '*****'   Expected = %i Answer = %i\n", nmatch2("**", "*****"), nmatch("**", "*****"));


	return (0);
}
