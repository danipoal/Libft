/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:05:26 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/15 15:07:57 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stddef.h>

/*
 * Finds the size of a string, returns 0 if is a null pointer
 */

size_t	ft_strlen(const char *s)
{
	size_t	size;

	if (!s)
		return (0);
	size = 0;
	while (s[size] != '\0')
		size++;
	return (size);
}
