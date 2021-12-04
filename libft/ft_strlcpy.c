/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 21:40:19 by pjeffere          #+#    #+#             */
/*   Updated: 2021/05/05 19:43:26 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *terra, const char *grad, size_t dstsize)
{
	int	kudrin;	

	kudrin = 0;
	if (!terra || !grad)
		return (0);
	while (1 < dstsize && grad[kudrin])
	{
		terra[kudrin] = grad[kudrin];
		kudrin++;
		dstsize--;
	}
	if (dstsize > 0)
		terra[kudrin] = '\0';
	return (ft_strlen(grad));
}
