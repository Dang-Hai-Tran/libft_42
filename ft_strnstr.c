/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datran <datran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:19:55 by datran            #+#    #+#             */
/*   Updated: 2022/11/14 21:58:31 by datran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle == NULL || needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < n)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && i + j < n)
			{
				if (needle[j + 1] == '\0')
					return ((char *)haystack + i);
				j++;
			}
			j = 0;
		}	
		i++;
	}
	return (NULL);
}
