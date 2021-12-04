/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 20:46:56 by pjeffere          #+#    #+#             */
/*   Updated: 2021/05/05 19:48:12 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tiempo;

	tiempo = (void *)malloc(count * size);
	if (!tiempo)
		return (NULL);
	ft_memset(tiempo, 0, size * count);
	return (tiempo);
}
