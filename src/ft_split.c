#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

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
		if(!currentWord && isprint(str[i]) && str[i] != sep) // Cambiar por ft_isprint
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
		array[i] =(char *) malloc(wordLen(s, c) * sizeof(char));
		if(array[i] == NULL)
			return (NULL);
		j = 0;
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

void	test_split(char **arr)
{
	int	i;

	i = 0;

	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
	printf("-----------\n");
}

int	main(void)
{

	const char	str1[] = "Hola que tal";
	const char	str2[] = " Hola que tal";
	const char	str3[] = "Hola que  tal";
	const char	str4[] = "Hola que tal  ";
	const char	str5[] = "";

	char	sep = ' ';
	char	**arr1;
	arr1 = ft_split(str1, sep);
	test_split(arr1);

	char	**arr2;
	arr2 = ft_split(str2, sep);
	test_split(arr2);

	char	**arr3;
	arr3 = ft_split(str3, sep);
	test_split(arr3);

	char	**arr4;
	arr4 = ft_split(str4, sep);
	test_split(arr4);

	char	**arr5;
	arr5 = ft_split(str5, sep);
	test_split(arr5);

	


	return (0);
}
