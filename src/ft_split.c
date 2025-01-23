#include <stdlib.h>
#include "../libft.h"

int	wordLen(const char *str, char sep)
{
	int	i;

	i = 0;
	while (str[i] != sep && str[i] != '\0')
		i++;
	return (i);
}


int	countWords(const char* str, char sep)
{
	int	i;
	int	words;
	int 	currentWord;

	i = 0;
	words = 0;
	currentWord = 0;
	while (str[i] != '\0')
	{
		if(!currentWord && ft_isprint(str[i]) && str[i] != sep) 
		{
			words++;
			currentWord = 1;
		}
		if(currentWord && str[i] == sep)
			currentWord = 0;
		i++;
	}
	return (words);
}

char	**ft_split(const char *s, char c)
{
	// Primero reservar memoria para el array
	char	**array;
	int	words;
	int	i;
	int	j;

	words = countWords(s, c);
	array = (char **) malloc((words + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < words)
	{
		j = 0;
		while (*s == c)
			s++;
		array[i] =(char *) malloc(wordLen(s, c) * sizeof(char));
		if(array[i] == NULL)
			return (NULL);
		while (j < wordLen(s, c))
		{
			array[i][j] = s[j];
			j++;
		}
		s += wordLen(s, c) + 1;
		i++;
	}
	array[i] = NULL;
	return (array);
}
