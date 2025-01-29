/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:52:53 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/29 22:30:34 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * 
 * Delete all the characters found in set, in the begining and the end until a
 * diferent character is found in the string.
 *
 * @param - direction: 0 -> Start to end. 	1 -> End to Start
 * @retuns The resultant string
 */

static int	ft_isspace_str(const char *l, int direction, int i)
{
	while (l[i] == ' ' || l[i] == '\f' || l[i] == '\n' || l[i] == '\r'
		|| l[i] == '\t' || l[i] == '\v')
	{
		if (!direction)
			i++;
		else
			i--;
	}
	return (i);
}

/*
 * Checks if the letter is equal to all characters in the set iterating set.
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
 * Counts if the set is found until a different let is found. Also counts
 * the isspace char before a nonset let is found. 
 *
 * @param - direction: 0 -> Start to end. 	1 -> End to Start
 *
 * @returns The quantity of the letters suposed to be removed
 * 	    l_t = letters_trimed
 */
static int	check_length(const char *s1, char const *set, int direction)
{
	int	isset;
	int	i;
	int	l_t;

	isset = 1;
	i = ft_isspace_str(s1, 0, 0);
	l_t = i;
	if (direction)
	{
		i = ft_isspace_str(s1, 1, ft_strlen(s1) - 1);
		l_t = ft_strlen(s1) - ft_isspace_str(s1, 1, ft_strlen(s1) - 1);
	}
	while (i >= 0 && s1[i] && isset)
	{
		if (is_letter_set(s1[i], set))
			l_t ++;
		else
			isset = 0;
		i--;
		if (!direction)
			i += 2;
	}
	return (l_t);
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
	src += ft_isspace_str(src, 0, 0);
	while (src[i] && i < len - t_end + 1)
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
