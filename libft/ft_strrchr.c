/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 22:19:49 by pjeffere          #+#    #+#             */
/*   Updated: 2021/05/08 11:28:44 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tiempo;

	tiempo = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			tiempo = ((char *)s);
		s++;
	}
	if (*s == c)
		tiempo = ((char *)s);
	return (tiempo);
}
