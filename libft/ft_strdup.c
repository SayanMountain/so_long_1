/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:40:38 by pjeffere          #+#    #+#             */
/*   Updated: 2021/05/08 18:41:02 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *palata)
{
	char	*copia;
	size_t	kudrin;

	copia = malloc(ft_strlen(palata) + 1);
	if (!copia)
		return (NULL);
	kudrin = 0;
	while (palata[kudrin] != '\0')
	{
		copia[kudrin] = palata[kudrin];
		kudrin++;
	}
	copia[kudrin] = '\0';
	return (copia);
}
