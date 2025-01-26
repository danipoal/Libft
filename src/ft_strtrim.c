/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:52:53 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/26 19:25:30 by danalvar         ###   ########.fr       */
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
static int	is_letter_set(char let, const char *set)
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
static int	check_length(const char *s1, char const *set, int direction)
{
	int	isset;
	int	i;
	int	length_trimed;

	length_trimed = 0;
	isset = 1;
	if (!direction)
		i = 0;
	else
		i = ft_strlen(s1) - 1;
	while (i >= 0 && s1[i] && isset)
	{
		if (is_letter_set(s1[i], set))
			length_trimed ++;
		else
			isset = 0;
		if (!direction)
			i++;
		else
			i--;
	}
	return (length_trimed);
}

/*
 * Copy the original string without the trimed sections into the dest
 *
 * @param t_end Is the size to stop before arriving to the end of the length
 */
static char	*fillstr(char *dest, const char *src, const char *set, size_t t_end)
{
	int		isset;
	size_t	i;
	size_t	dest_index;
	size_t	len;

	i = 0;
	isset = 1;
	dest_index = 0;
	len = ft_strlen(src);
	while (src[i] && i < len - t_end)
	{
		if (!is_letter_set(src[i], set))
			isset = 0;
		if (!isset)
			dest[dest_index++] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		len;
	int		trim_end;
	char	*str;

	len = ft_strlen(s1);
	len -= check_length(s1, set, 0);
	trim_end = check_length(s1, set, 1);
	len -= trim_end;
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str = fillstr(str, s1, set, trim_end);
	return (str);
}
