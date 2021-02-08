/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 15:55:00 by yayito            #+#    #+#             */
/*   Updated: 2021/02/09 04:55:47 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	moji;
	unsigned char	*b;
	size_t			i;

	moji = ch;
	b = (unsigned char*)buf;
	i = 0;
	while (n > 0)
	{
		b[i] = moji;
		i++;
		n--;
	}
	return (buf);
}
