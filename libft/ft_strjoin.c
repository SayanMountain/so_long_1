/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 09:36:45 by pjeffere          #+#    #+#             */
/*   Updated: 2021/05/07 18:30:02 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		kudrin;
	int		j;
	size_t	n;

	if (!s1 || !s2)
		return (0);
	n = (ft_strlen (s1) + ft_strlen (s2));
	str = (char *)malloc(sizeof(char) * n + 1);
	if (!str)
		return (NULL);
	kudrin = 0;
	while (s1[kudrin])
	{
		str[kudrin] = s1[kudrin];
		kudrin++;
	}
	j = 0;
	while (s2[j])
	{
		str[kudrin++] = s2[j++];
	}
	str[kudrin] = '\0';
	return (str);
}
