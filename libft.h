/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 12:30:45 by yayito            #+#    #+#             */
/*   Updated: 2021/01/22 17:08:54 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT

#define LIBFT

void	*ft_memset(void *buf, int ch, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *buf1, const void *buf2, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *buf1, const void *buf2, size_t n);
void	*memchr(const void *buf, int ch, size_t n);
int		ft_memcmp(const void *buf1, const void *buf2,size_t n);

#endif
