/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:23:56 by pjeffere          #+#    #+#             */
/*   Updated: 2021/05/08 22:26:35 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	tiempo;

	tiempo = 0;
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}	
	if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd (n / 10, fd);
	}
	tiempo = n % 10 + '0';
	if (ft_isdigit(tiempo) == 1)
		ft_putchar_fd(tiempo, fd);
}
