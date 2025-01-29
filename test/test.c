/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:49:13 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/29 14:54:29 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _DEFAULT_SOURCE
#include "test.h"


void	split_unit_test(const char *s, char sep, char **res)
{
	char	**arr;
	int	is_ok;
	int	i;

	is_ok = 1;
	i = 0;
	arr = ft_split(s, sep);
	while (arr[i])
	{
		if (strcmp(arr[i], res[i]))
			is_ok = 0;
		i++;
	}
	if (is_ok)
		printf(GREEN "OK " RESET);
	else
		{
			i = 0;
			printf(RED "Error en split for: \n");
			while (arr[i] && res[i])
				{
					printf(RED "%d - ft: '%s' Orig: '%s'\n" RESET, i, arr[i], res[i]);
					i++;
				}
		}
}
void	split_tests(void)
{
	printf("split test: ");

	const char	str1[] = "Hola que tal";
	char	*res1[] = {"Hola", "que", "tal"};
	split_unit_test(str1, ' ', res1);

	printf("\n");
}


void	atoi_unit_test(char *nbr)
{
	int	o;
	int	ft;

	if ((o = atoi(nbr)) != (ft = ft_atoi(nbr)))
		printf(RED "Error in atoi. Orig: '%i' ft: '%i'" RESET, o, ft);
	else
		printf(GREEN "OK " RESET);

}
void	atoi_tests()
{
	printf("atoi tests: ");
	atoi_unit_test("   -+--+32424f34");
	atoi_unit_test(" -a");
	atoi_unit_test("22");
	atoi_unit_test("32525253");
	atoi_unit_test("fd");
	atoi_unit_test("");
	atoi_unit_test("   34");
	atoi_unit_test("---34");
	printf("\n");
}


void	itoa_unit_test(int n, char *res)
{
	char	*str;

	if (strcmp(str = ft_itoa(n), res))
		printf(RED "Itoa error. Orig: '%s' ft: '%s'\n" RESET, res, str);
	else
		printf(GREEN "OK " RESET);
}

void itoa_tests()
{
	printf("itoa tests: ");
	itoa_unit_test(-234, "-234");
	itoa_unit_test(2323, "2323");
	itoa_unit_test(0, "0");
	itoa_unit_test(INT_MIN, "-2147483648");
	printf("\n");
}

/*
void	putnbr_fd_tests()
{
	printf("putnbr test: ");
	ft_putnbr_fd(34, 1);
	printf("\n");
}
*/

int	main(void)
{
	char_tests();
	strlen_test();
	str_tests();
	mem_tests();
	atoi_tests();
	itoa_tests();
	split_tests();
	advanced_str_tests();
	param_func_tests();
	//putnbr_fd_tests();
	list_tests();

	return (0);
}
