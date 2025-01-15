/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:26:54 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/15 20:05:42 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
 * Copies up to size - 1 characters from the NUL-terminated string src to
 * dst, NUL-terminating the result.
 * Returns the size of the string tryed to create.
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned long	i;

	i = 0;
	while (--size > 0 && *src)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	while (*src)
		i++;
	return (i);
}
