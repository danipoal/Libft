/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 12:48:36 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/26 13:05:54 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * Create dinamic memory and initialize it with 0s
 *
 * Unsigned char is used to interact with elemts byte by byte
 *
 * @param nmemb An array of the number of elements to save
 * @param size The byte size of the elemets
 *
 */

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*s;

	s = (unsigned char *) malloc(nmemb * size);
	i = 0;
	while (i++ < nmemb)
		s[i] = 0;
	return ((void *)s);
}
