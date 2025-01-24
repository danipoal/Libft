#include "../libft.h"

/**
 * Compares the first n bytes (each interpreted as unsigned char) of 
 * the memory areas s1 and s2.
 *
 * @retun 
 * 	If n = 0 return 0
 *
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;
	unsigned long	i;

	if (n == 0)
		return (0);
	ptr_s1 = (unsigned char *) s1;
	ptr_s2 = (unsigned char *) s2;
	i = 0;
	while (i < n && ptr_s1[i] && ptr_s2[i])
	{
		if (ptr_s1[i] != ptr_s2[i])
			return (ptr_s1[i] - ptr_s2[i]);
		i++;
	}
	return (0);
}
