/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 22:15:25 by pjeffere          #+#    #+#             */
/*   Updated: 2021/05/08 22:55:05 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	kudrin;

	kudrin = 0;
	while (s[kudrin])
	{
		if (s[kudrin] == (unsigned char)c)
		{
			return ((char *)(s + kudrin));
		}
		kudrin++;
	}
	if ((char)c == '\0')
		return ((char *)(s + kudrin));
	return (0);
}
