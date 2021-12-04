/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:17:45 by pjeffere          #+#    #+#             */
/*   Updated: 2021/05/01 11:12:56 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *terra, const void *grad, size_t n)
{
	size_t	kudrin;

	kudrin = 0;
	if (!terra && !grad)
		return (NULL);
	while (kudrin < n)
	{
		((unsigned char *)terra)[kudrin] = ((unsigned char *)grad)[kudrin];
		kudrin++;
	}
	return (terra);
}
