/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 23:00:08 by pjeffere          #+#    #+#             */
/*   Updated: 2021/08/19 23:03:14 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	buf_clean(char *buf)
{
	free(buf);
	buf = NULL;
	return (-1);
}

int	check_rem(char *rem)
{
	if (!rem)
		return (0);
	if (ft_strchr(rem, '\n'))
		return (1);
	return (0);
}

char	record_to_line(char **rem, char **line)
{
	char	*temp3;
	char	*temp4;

	temp3 = ft_strchr(*rem, '\n');
	if (temp3)
	{
		temp4 = *rem;
		*temp3 = '\0';
		*line = ft_strdup(*rem);
		temp3++;
		*rem = ft_strdup(temp3);
		free(temp4);
	}
	else
	{
		*line = ft_strdup(*rem);
		while (*rem)
		{
			free(*rem);
			*rem = NULL;
		}
	}
	return (0);
}	

int	ft_read_string(char **rem, char *buf, int fd, char **line)
{	
	int	temp;

	temp = 1;
	while (temp && check_rem(*rem) == 0)
	{
		temp = read(fd, buf, BUFFER_SIZE);
		if (temp < 0)
			buf_clean (buf);
		buf[temp] = '\0';
		if (!(*rem))
		{
			*rem = ft_strdup(buf);
			if (!(*rem))
				return (-1);
		}
		else
			*rem = ft_strjoin(*rem, buf);
	}
	record_to_line (rem, line);
	if (temp)
		return (1);
	return (0);
}

int	get_next_line(int fd, char **line)
{
	int				true;
	char			*buf;
	static char		*rem;

	if (BUFFER_SIZE <= 0 || read(fd, 0, 0) || !line)
		return (-1);
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (-1);
	true = ft_read_string(&rem, buf, fd, line);
	free(buf);
	return (true);
}
