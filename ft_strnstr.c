/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datran <datran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:19:55 by datran            #+#    #+#             */
/*   Updated: 2022/11/09 15:31:27 by datran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	len = ft_strlen(little);
	if (!*little)
		return ((char *)big);
	while (*big && len-- >= little_len)
	{
		if (*big == *little && !ft_memcmp(big, little, len))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
