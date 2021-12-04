/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 18:59:20 by pjeffere          #+#    #+#             */
/*   Updated: 2021/05/02 19:41:55 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	kudrin;
	char	*temp;

	kudrin = 0;
	temp = (char *)s;
	while (kudrin < n)
	{
		if ((unsigned char)temp[kudrin] == (unsigned char)c)
			return (temp + kudrin);
		kudrin++;
	}
	return (NULL);
}
