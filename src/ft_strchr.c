/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:01:58 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/31 12:30:09 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
 * Returns  a  pointer to the first occurrence of the character c in the
 * string s. If c is not found, return a pointer to the null byte at the
 * end of s. Null char '\0' can be included in the search as c
 *
 * As we cast char *, the output should not be modified
 */

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s != (char) c && *s)
		s++;
	if (*s == (char) c)
		return ((char *) s);
	return (NULL);
}
