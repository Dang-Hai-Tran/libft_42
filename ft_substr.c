/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datran <datran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:05:25 by datran            #+#    #+#             */
/*   Updated: 2022/11/14 13:23:04 by datran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	sub = (char *)malloc(len + 1);
	if (!s || !sub)
		return (NULL);
	if ((size_t)start >= ft_strlen(s) || !ft_strlcpy(sub, s + start, len + 1))
		*sub = 0;
	return (sub);
}
