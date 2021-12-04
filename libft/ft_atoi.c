/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 22:50:38 by pjeffere          #+#    #+#             */
/*   Updated: 2021/05/07 15:38:36 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int					kudrin;
	unsigned long long	numero;

	numero = 0;
	kudrin = 1;
	while (*nptr == '\t' || *nptr == '\f' || *nptr == '\r'
		|| *nptr == '\n' || *nptr == '\v' || *nptr == ' ')
		nptr++;
	if (*nptr == '-')
		kudrin = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
		numero = numero * 10 + (*nptr++ - '0');
	if ((numero > 9223372036854775807) && (kudrin == 1))
		return (-1);
	if (numero > 9223372036854775807 && (kudrin == -1))
		return (0);
	return (numero * kudrin);
}
