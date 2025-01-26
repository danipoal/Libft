/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:01:15 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/26 13:21:28 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	word_len(const char *str, char sep)
{
	int	i;

	i = 0;
	while (str[i] != sep && str[i] != '\0')
		i++;
	return (i);
}

static int	count_words(const char *str, char sep)
{
	int	i;
	int	words;
	int	current_word;

	i = 0;
	words = 0;
	current_word = 0;
	while (str[i] != '\0')
	{
		if (!current_word && ft_isprint(str[i]) && str[i] != sep)
		{
			words++;
			current_word = 1;
		}
		if (current_word && str[i] == sep)
			current_word = 0;
		i++;
	}
	return (words);
}

char	**ft_split(const char *s, char c)
{
	int		words;
	int		i;
	int		j;
	char	**array;

	words = count_words(s, c);
	array = (char **) malloc((words + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < words)
	{
		j = 0;
		while (*s == c)
			s++;
		array[i] = (char *) malloc((word_len(s, c) + 1) * sizeof(char));
		if (array[i] == NULL)
			return (NULL);
		while (j < word_len(s, c))
		{
			array[i][j] = s[j];
			j++;
		}
		array[i][j] = '\0';
		s += word_len(s, c) + 1;
		i++;
	}
	array[i] = NULL;
	return (array);
}
