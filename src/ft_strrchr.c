/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:08:31 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/15 18:14:37 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
 * Returns a pointer to the last occurrence of  the  character  c  in  the
 * string s.
 *
 */

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last_coincidence;

	last_coincidence = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			last_coincidence = i;
		i++;
	}
	if (last_coincidence == -1)
		return (NULL);
	return ((char *) &s[last_coincidence]);
}
