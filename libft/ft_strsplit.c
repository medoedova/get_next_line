/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrhaena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 03:49:29 by vrhaena           #+#    #+#             */
/*   Updated: 2019/09/25 21:50:36 by vrhaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		free_arr(char ***arr, int i)
{
	while (i >= 0)
	{
		free((*arr)[i]);
		(*arr)[i] = NULL;
		i--;
	}
	free(*arr);
	*arr = NULL;
}

static int		count_words(char const *s, char c)
{
	int count;
	int flag;

	flag = 0;
	count = 0;
	while (*s != '\0')
	{
		if (flag == 1 && *s == c)
			flag = 0;
		if (flag == 0 && *s != c)
		{
			flag = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char		*get_space(char const *s, int pos, char c)
{
	char	*word;
	int		start;

	start = pos;
	while (s[pos] != c && s[pos] != '\0')
		pos++;
	if (!(word = ft_strsub(s, start, (size_t)(pos - start))))
		return (NULL);
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**arr;

	i = 0;
	j = 0;
	if (!s || !c)
		return (NULL);
	if (!(arr = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i++] == c)
			continue ;
		if (!(arr[j] = get_space(s, --i, c)))
		{
			free_arr(&arr, j);
			return (NULL);
		}
		while (s[i] != c && s[i] != '\0')
			i++;
		j++;
	}
	arr[j] = 0;
	return (arr);
}
