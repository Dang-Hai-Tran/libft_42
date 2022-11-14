/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datran <datran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:08:53 by datran            #+#    #+#             */
/*   Updated: 2022/11/14 22:24:08 by datran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_freeup(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str);
		i++;
	}
	free(str);
}

static int	ft_wordcount(char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			word++;
			while (str[i] != c && str[i])
				i++;
			if (!str[i])
				return (word);
		}
		i++;
	}
	return (word);
}

static void	ft_strcpy(char *word, char *str, char c, int j)
{
	int	i;

	i = 0;
	while (str[j] && str[j] == c)
		j++;
	while (str[j + i] != c && str[j + i])
	{
		word[i] = str[j + i];
		i++;
	}
	word[i] = 0;
}

static char	*ft_stralloc(char *str, char c, int *k)
{
	char	*word;
	int		j;

	j = *k;
	word = NULL;
	while (str[*k])
	{
		if (str[*k] != c)
		{
			while (str[*k] && str[*k] != c)
				*k += 1;
			word = (char *)malloc(sizeof(char) * (*k + 1));
			if (!word)
				return (NULL);
			break ;
		}
		*k += 1;
	}
	ft_strcpy(word, str, c, j);
	return (word);
}

char	**ft_split(char const *str, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		pos;

	if (!str)
		return (NULL);
	i = 0;
	pos = 0;
	j = ft_wordcount((char *)str, c);
	tab = (char **)malloc(sizeof(char *) * (j + 1));
	if (!tab)
		return (NULL);
	tab[j] = NULL;
	while (i < j)
	{
		tab[i] = ft_stralloc(((char *)str), c, &pos);
		if (!tab[i])
			ft_freeup(tab[i]);
		i++;
	}
	return (tab);
}
