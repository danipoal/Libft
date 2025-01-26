/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:52:53 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/26 17:13:52 by danalvar         ###   ########.fr       */
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


/*
 * Checks if the letter is equal to all characters in the set
 *
 */

int	is_letter_set(char let, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (let == set[i])
			return (1);
		i++;
	}
	return (0);
}

/*
 * Checks the set for all the string, in the begining and in the final
 *
 * @param - direction: 0 -> Start to end. 	1 -> End to Start
 * @returns The quantity of the letters suposed to be removed
 */
int	check_length(const char *s1, char const *set, int direction)
{
	int	isset;
	int	i;
	int	length_trimed;

	length_trimed = 0;
	isset = 1;
	if (direction == 0)
		i = 0;
	else if (direction == 1)
		i = ft_strlen();
	while (s1[i] && isset)
	{
		if (is_letter_set(s1[i], set))
			length_trimed ++;
		else
			isset = 0;
		i++;
	}
	return (length_trimed);
}

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
	len = len - check_length(s1, set, 0);
	// Final
	len = len - check_length(s1, set, 1)
	return (len);

	// Copiar en caso de que aun no se haya encontrado un char diferente



}

