/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:52:53 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/26 16:41:29 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include "../libft.h"

/**
 * 
 * Delete all the characters found in set, in the begining and the end until a
 * diferent character is found in the string.
 *
 * @retuns The resultant string
 */

int	ft_strtrim(const char *s1, char const *set)
{
// Reservar memoria para los caracteres resultantes

//	char	*str;

	int	start;
	int	len;
	int	end;
	int	i;
	size_t	j;
	int	isset;

	start = 0;
	len = ft_strlen(s1);
	end = len - 1;

	// Revisar string y encontrar
	i = 0;
	isset = 1;
	// Principio
	while (s1[i] && isset)
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				len--;
				break;
			}
			j++;
		}
		if (j == ft_strlen(set))
			isset = 0;
		i++;
	}
	// Final
	isset = 1;
	i = 0;
	while (end > 0 && isset)
	{
		j = 0;
		while (set[j])
		{
			if (s1[end] == set[j])
			{
				len--;
				break;
			}
			j++;
		}
		if (j == ft_strlen(set))
			isset = 0;
		end --;
	}
	return (len);

	// Copiar en caso de que aun no se haya encontrado un char diferente



}

