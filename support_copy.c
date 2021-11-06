/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support_copy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:21:28 by pjeffere          #+#    #+#             */
/*   Updated: 2021/08/19 21:21:28 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_strlen(char *s)
{
	size_t	kudrin;

	kudrin = 0;
	while (s[kudrin] != '\0')
		kudrin++;
	return (kudrin);
}

int	exit_win(void *ptr)
{
	(void)ptr;
	exit(0);
}
