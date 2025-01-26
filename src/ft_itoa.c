/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 18:44:44 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/26 19:21:51 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
 * Get the length of the number dividing it by base 10. Starting by 1 because
 * it always will fit at least 1 space
 */
static int	num_length(int n)
{
	int	i;

	i = 1;
	while (n >= 10)
	{
		n /= 10;
		i ++;
	}
	return (i);
}

/**
 * Converts an integer to a char number
 */
char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = num_length(n);
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len-- > 0)
	{
		str[len] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
