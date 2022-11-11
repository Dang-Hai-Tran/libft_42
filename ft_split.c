/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datran <datran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:08:53 by datran            #+#    #+#             */
/*   Updated: 2022/11/11 15:55:57 by datran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*first_word(char const *s, size_t *j, char c)
{
	size_t	i;
	char	*sub;

	if (! *s)
		return (NULL);
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	*j = i;
	while (s[*j] && s[*j] != c)
		(*j)++;
	sub = ft_substr(s, i, (*j) - i);
	return (sub);
}

size_t	word_count(char const *s, char c)
{
	size_t	count;
	size_t	j;

	count = 0;
	while (first_word(s, &j, c))
	{
		count++;
		s += j;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	size_tab;
	size_t	i;
	size_t	j;

	i = 0;
	size_tab = word_count(s, c);
	tab = malloc(sizeof(char *) * (size_tab + 1));
	while (first_word(s, &j, c))
	{
		tab[i] = first_word(s, &j, c);
		i++;
		s += j;
	}
	tab[i] = 0;
	return (tab);
}
