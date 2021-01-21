/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 17:22:46 by yayito            #+#    #+#             */
/*   Updated: 2021/01/22 08:58:52 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	moji;
	unsigned char	*b;
	int				i;

	moji = '\0';
	b = (unsigned char*)s;
	i = 0;
	while (n > 0)
	{
		b[i] = moji;
		i++;
		n--;
	}
	return ;
}
