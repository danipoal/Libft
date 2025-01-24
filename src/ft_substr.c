#include "../libft.h"

/**
 * Devolver una substring a partir de start con longitud len
 *
 */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;



	// Comprobar que la string tiene el start y se puede crear de ese len
	// Si strlen = start + len
	

	// Reservar memoria
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);

	//Copiar a partir de esa parte hasta el contador len
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// DUDA: SI el len es mayor que el len *s, se copia hasta donde se pueda? O error?
