/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datran <datran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:27:26 by datran            #+#    #+#             */
/*   Updated: 2022/11/10 10:36:10 by datran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	void	*buffer;
	
	buffer = (void *)malloc(count * size);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, count * size);
	return (buffer);
}
