/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:45:04 by pjeffere          #+#    #+#             */
/*   Updated: 2021/05/08 22:52:55 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	kudrin;

	kudrin = 0;
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		kudrin = (int)len - 1;
		while (kudrin >= 0)
		{
			*(char *)(dst + kudrin) = *(char *)(src + kudrin);
			kudrin--;
		}
	}
	else
	{
		while (kudrin < (int)len)
		{
			*(char *)(dst + kudrin) = *(char *)(src + kudrin);
			kudrin++;
		}
	}
	return (dst);
}
