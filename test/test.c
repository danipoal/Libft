/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:49:13 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/17 15:45:30 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _DEFAULT_SOURCE

#include "test.h"



/*void	split_unit_test(char **arr)
{
	int	i;

	i = 0;

	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
	printf("-----------\n");
}


void	split_unit_test(const char *s, char sep)
{
	char	**arr1;
	char	**arr2;
	int	equal;

	arr1 = ft_split(s, sep);
	arr2 = strtok((char *) s, &sep);
	// Comparacion de elemento por elemento
	equal = 1;
	i = 0;
	while (arr1[i] != NULL && arr2[i] != NULL)
	{
		if (strcmp(arr1[i], arr2[i]))
			equal = 0;
		i++;
	}
	if (!equal)
		printf(RED "Error en split %s\n" RESET, s);
	else
		printf(GREEN "OK ");

}
void	split_tests(void)
{

	printf("split test: ");
	split_unit_test("Hola que tal", ' ');

	printf("\n");


	const char	str1[] = "Hola que tal";
	const char	str2[] = " Hola que tal";
	const char	str3[] = "Hola que  tal";
	const char	str4[] = "Hola que tal  ";
	const char	str5[] = "";

	char	sep = ' ';
	char	**arr1;
	arr1 = ft_split(str1, sep);
	split_unit_test(arr1);

	char	**arr2;
	arr2 = ft_split(str2, sep);
	split_unit_test(arr2);

	char	**arr3;
	arr3 = ft_split(str3, sep);
	split_unit_test(arr3);

	char	**arr4;
	arr4 = ft_split(str4, sep);
	split_unit_test(arr4);

	char	**arr5;
	arr5 = ft_split(str5, sep);
	split_unit_test(arr5);
}
*/


void	atoi_tests()
{
	char	str[17];

	strcpy(str,"   -+--+32424f34");
	if (atoi(str) != ft_atoi(str))
		printf("Err atoi for %s orig: %i ft: %i\n", str, atoi(str), ft_atoi(str));
	strcpy(str," -a");
	if (atoi(str) != ft_atoi(str))
		printf("Err atoi for %s orig: %i ft: %i\n", str, atoi(str), ft_atoi(str));
	strcpy(str, "22");
	if (atoi(str) != ft_atoi(str))
		printf("Err atoi for %s orig: %i ft: %i\n", str, atoi(str), ft_atoi(str));
	strcpy(str, "32525253");
	if (atoi(str) != ft_atoi(str))
		printf("Err atoi for %s orig: %i ft: %i\n", str, atoi(str), ft_atoi(str));
	strcpy(str, "fd");
	if (atoi(str) != ft_atoi(str))
		printf("Err atoi for %s orig: %i ft: %i\n", str, atoi(str), ft_atoi(str));
	strcpy(str, "");
	if (atoi(str) != ft_atoi(str))
		printf("Err atoi for %s orig: %i ft: %i\n", str, atoi(str), ft_atoi(str));
	strcpy(str,"   34");
	if (atoi(str) != ft_atoi(str))
		printf("Err atoi for %s orig: %i ft: %i\n", str, atoi(str), ft_atoi(str));
	strcpy(str,"---34");
	if (atoi(str) != ft_atoi(str))
		printf("Err atoi for %s orig: %i ft: %i\n", str, atoi(str), ft_atoi(str));
}




int	main(void)
{
	char_tests();
	strlen_test();
	str_tests();
	mem_tests();
	atoi_tests();
	//split_tests();
	advanced_str_tests();
	
	return (0);
}
