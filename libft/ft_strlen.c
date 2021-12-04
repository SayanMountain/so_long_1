/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 09:10:11 by pjeffere          #+#    #+#             */
/*   Updated: 2021/05/01 10:33:38 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *s)
{
	size_t	kudrin;

	kudrin = 0;
	while (s[kudrin] != '\0')
	{
		kudrin++;
	}
	return (kudrin);
}
