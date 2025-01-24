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
	unsigned char	*s;
	size_t	i;

	s = (unsigned char *) malloc(nmemb * size);
	i = 0;
	while (i++ < nmemb)
		s[i] = 0;

	return ((void *)s);
}

