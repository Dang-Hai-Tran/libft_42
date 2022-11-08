/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datran <datran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:34:12 by datran            #+#    #+#             */
/*   Updated: 2022/11/08 15:06:39 by datran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = -1;
	if (!src)
		return (0);
	if (dstsize)
	{
		while (++i < dstsize - 1 && src[i])
			dst[i] = src[i];
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
