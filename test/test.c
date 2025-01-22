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
	return (0);
}
