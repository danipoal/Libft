/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 00:47:52 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/30 01:04:18 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * Locates the first occurrence of the null-terminated string little in the
 * string big, where not more than len characters are searched. Characters that
 * appear after a ‘\0’ character are not searched.
 *
 * @returns A pointer to the start/coincidence of little in big.
 */


char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (little[j] && big[i + j] == little[j])
			j++;				
		if (j == len)
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}
