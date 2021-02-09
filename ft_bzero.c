/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 17:22:46 by yayito            #+#    #+#             */
/*   Updated: 2021/02/09 06:55:50 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	moji;
	unsigned char	*b;
	size_t			i;

	moji = '\0';
	b = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		b[i] = moji;
		i++;
	}
	return ;
}
