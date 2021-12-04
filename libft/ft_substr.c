/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 19:29:18 by pjeffere          #+#    #+#             */
/*   Updated: 2021/05/09 00:32:07 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	help(char const *s, char *oracion, unsigned int start, size_t len)
{
	size_t	kudrin;
	size_t	NEkudrin;

	kudrin = 0;
	NEkudrin = 0;
	while (s[kudrin])
	{
		if (kudrin >= start && NEkudrin < len)
			oracion[NEkudrin++] = s[kudrin];
		kudrin++;
	}
	oracion[NEkudrin] = 0;
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*oracion;

	if (!s)
		return (NULL);
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	if (ft_strlen(s) < start)
	{
		oracion = (char *)malloc(sizeof(char));
		if (!oracion)
			return (NULL);
		*(oracion) = '\0';
		return (oracion);
	}
	oracion = (char *)malloc(sizeof(char) * (len + 1));
	if (!oracion)
		return (NULL);
	help(s, oracion, start, len);
	return (oracion);
}
