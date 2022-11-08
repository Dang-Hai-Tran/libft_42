/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datran <datran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:00:43 by datran            #+#    #+#             */
/*   Updated: 2022/11/08 14:20:58 by datran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst > src)
		i = n + 1;
	else
		i = -1;
	if (dst != src & n)
	{
		if (dst > src)
			while (--i)
				((unsigned char *)dst)[i - 1] = ((unsigned char *)src)[i - 1];
		else
			while (++i < n)
				((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	return (dst);
}
