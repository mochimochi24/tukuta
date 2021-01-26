/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 12:30:45 by yayito            #+#    #+#             */
/*   Updated: 2021/01/23 20:39:52 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

#define LIBFT_H

void			*ft_memset(void *buf, int ch, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *buf1, const void *buf2, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memmove(void *buf1, const void *buf2, size_t n);
void			*ft_memchr(const void *buf, int ch, size_t n);
int				ft_memcmp(consr void *buf1, const void *buf2, size_t n);
size_t			ft_strlen(const char *str);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);

#endif
