/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:49:13 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/15 20:13:27 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _DEFAULT_SOURCE

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/*
 * Functions issomething() from ctype, not always return
 * 1 like ft_issomething(), it can return a positive number
 * always > 0. Then we will check not the ==, also the > 0
 */
int	check(int i1, int i2)
{
	return ((i1 == i2) || (i1 > 0 && i2 > 0));
}

void	char_tests(void)
{
	int	i;

	// Char methods check
	i = 0;
	while (i < 256)
	{
		if (!check(isalpha(i), ft_isalpha(i)))
			printf("ft_isalpha failed in ascii %d\n", i);
		if (!check(isdigit(i), ft_isdigit(i)))
			printf("ft_isdigit failed in ascii %d\n", i);
		if (!check(isalnum(i), ft_isalnum(i)))
			printf("ft_isalnum failed in ascii %d\n", i);
		if (!check(isascii(i), ft_isascii(i)))
			printf("ft_isascii failed in ascii %d\n", i);
		if (!check(isprint(i), ft_isprint(i)))
			printf("ft_isprint failed in ascii %d\n", i);
		if ((toupper(i) != ft_toupper(i)))
			printf("ft_toupper failed in ascii %d\n", i);
		if ((tolower(i) != ft_tolower(i)))
			printf("ft_tolower failed in ascii %d\n", i);
		i++;
	}
}

void	strlen_test(void)
{
	char	strlen1[] = "Hoola q ";
	char	strlen2[] = "Hol peps\n";
	char	*strlen3 = NULL;

	if (strlen(strlen1) != ft_strlen(strlen1))
		printf("Error in len for %s\n", strlen1);
	if (strlen(strlen2) != ft_strlen(strlen2))
		printf("Error in len for %s\n", strlen2);
	if (ft_strlen(strlen3))
		printf("Error in len for NULL\n");
}

/*
 * Tests for strchr(), strrchr(), strncmp()
 */
void	strchr_tests(void)
{
	int	let = 'a';
	const char	strchr1[] = "Hol peps\n";
	const char	strchr2[] = "oa";

	if (strchr(strchr1, let) != ft_strchr(strchr1, let))
		printf("Error in strchr for no coincidence (null)\n");
	if (strchr(strchr2, let) != ft_strchr(strchr2, let))
		printf("Error in strchr for coincidence\n");
	if (strrchr(strchr1, let) != ft_strrchr(strchr1, let))
		printf("Error in strrchr for no coincidence (null)\n");
	if (strrchr(strchr2, let) != ft_strrchr(strchr2, let))
		printf("Error in strrchr for coincidence\n");
	if (strncmp(strchr1, strchr2, 1) != ft_strncmp(strchr1, strchr2, 1))
		printf("Error in strncmp comparation\n");
}
/*
void	strcpy_tests(void)
{
	char dest[10];
	char dest2[10];
	const char src[] = "Hola que tal";
	
	if (strlcpy(dest, src, 10) != ft_strlcpy(dest, src, 10)
		|| strcmp(dest, dest2))
		printf("Error en srtlcpy, dest1: %s\tdest2: %s \n", dest, dest2);

}
*/
int	main(void)
{
	char_tests();
	strlen_test();
	strchr_tests();
	return (0);
}
