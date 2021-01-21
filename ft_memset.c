/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 15:55:00 by yayito            #+#    #+#             */
/*   Updated: 2021/01/21 17:16:35 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	moji;
	unsigned char	*b;
	int				i;
	moji = ch;
	b = (unsigned char*)buf;
	i = 0;

	while (n > 0)
	{
		b[i] = moji;
		i++;
		n--;
	}
	return(buf);
}

int		main(void)
{
	char	tesu[10] = "1234567";
	char	*ptr = &tesu[2];
	ft_memset(ptr, 'a', 3);
	printf("%s", tesu);
	return (0);
}
