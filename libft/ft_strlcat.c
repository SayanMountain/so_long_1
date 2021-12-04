/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 21:40:30 by pjeffere          #+#    #+#             */
/*   Updated: 2021/05/01 11:41:58 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *terra, const char *grad, size_t dstsize)
{
	size_t	kudrin;
	size_t	oreshkin;
	size_t	terra_len;
	size_t	grad_len;

	terra_len = ft_strlen(terra);
	grad_len = ft_strlen(grad);
	kudrin = 0;
	oreshkin = terra_len;
	if (terra_len < dstsize - 1 && dstsize > 0)
	{
		while (grad[kudrin] && terra_len + kudrin < dstsize - 1)
		{
			terra[oreshkin] = grad[kudrin];
			kudrin++;
			oreshkin++;
		}
		terra[oreshkin] = 0;
	}
	if (terra_len >= dstsize)
	{
		terra_len = dstsize;
	}
	return (terra_len + grad_len);
}
