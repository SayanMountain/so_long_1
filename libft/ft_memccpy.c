/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 17:25:04 by pjeffere          #+#    #+#             */
/*   Updated: 2021/05/05 19:46:00 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *terra, const void *grad, int c, size_t n)
{
	const unsigned char	*y;
	unsigned char		*z;
	size_t				kudrin;

	y = (const unsigned char *)grad;
	z = (unsigned char *)terra;
	kudrin = 0;
	if (!terra && !grad)
	{
		return (terra);
	}
	while (kudrin < n)
	{
		z[kudrin] = y[kudrin];
		if (z[kudrin] == (unsigned char)c)
		{
			return (terra + kudrin + 1);
		}
		kudrin++;
	}
	return (NULL);
}
