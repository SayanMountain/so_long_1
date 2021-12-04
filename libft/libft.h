/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 15:49:51 by pjeffere          #+#    #+#             */
/*   Updated: 2021/05/08 17:48:24 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int		ft_strlen(char *s);
void	*ft_memcpy(void*dst, void *src, size_t n);
void	*ft_memset(void *s, int c, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
size_t	ft_strlcat(char *terra, char *grad, size_t dstsize);
int		ft_memcmp(void *s1, void *s2, size_t n);
void	*ft_memmove(void *dst, void *src, size_t len);
int		ft_isprint(int c);
int		ft_isdigit(int c);
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
void	*ft_memccpy(void *dst, void *src, int c, size_t n);
void	*ft_memchr(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
char	*ft_strrchr(char *s, int c);
char	*ft_strdup(char *palata);
void	*ft_calloc(size_t count, size_t size);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
int		ft_atoi(char *nptr);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strtrim(char *s1, char *set);
char	*ft_strmapi(char *s, char (*f)(unsigned int, char));
void	ft_putendl_fd(char *s, int fd);
char	*ft_itoa(int n);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strnstr(char *big, char *little, size_t len);
char	**ft_split(char *s, char c);

#endif
