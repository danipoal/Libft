#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

/*
 * Functions issomething() from ctype, not always return
 * 1 like ft_issomething(), it can return a positive number
 * always > 0. Then we will check not the ==, also the > 0
 */
int	check(int i1, int i2)
{
	return (i1 == i2) || (i1 > 0 && i2 > 0);
}

int	main(void)
{
	int	i;

	// Char methods check
	i = 0;
	while (i < 256)
	{
		if (!check(isalpha(i), ft_isalpha(i)))
			printf("ft_isalpha failed in ascii %d\n", i);
		i++;
	}
	return (0);
}
