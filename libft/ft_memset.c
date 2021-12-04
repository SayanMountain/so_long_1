/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:54:40 by pjeffere          #+#    #+#             */
/*   Updated: 2021/05/02 21:13:58 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *terra, int grad, size_t len)
{
	unsigned char	*d;

	d = (unsigned char *)terra;
	while (len--)
		*d++ = grad;
	return (terra);
}
