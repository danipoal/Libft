#include "../libft.h"

/*
 * Duplicate a string saving dinamic memory
 */ 

char	*ft_strdup(const char *s)
{
	int	i;
	char	*str;

	i = 0;
	while (s[i] =! '\0')
		i++;
	str = (char *) malloc((i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	*str2;

	str2 = ft_strdup("Hola pepsicola");
	printf(str2);
}*/

