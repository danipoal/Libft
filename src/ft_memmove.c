#include "../libft.h"

/**
 * Copies n bytes from memory area src to memory area dest. The memory areas may
 * overlap: copying takes  place  as  though  the bytes in src are first copied 
 * into a temporary array that does not overlap src  or  dest,  and  the bytes 
 * are then copied from the temporary array to dest.
 *
 * @returns A pointer to dest
 */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned long	i;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	i = 0;
	while (i < n && d[i] && s[i])
	{
		d[i] = s[i];
		i++;
	}
	return ((void *) s);
}
