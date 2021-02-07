/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 09:26:49 by yayito            #+#    #+#             */
/*   Updated: 2021/02/07 17:44:26 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**                     int c
*/

void	ft_putchar_fd(char c, int fd)
{
	int		byte;
	int		cc;

	cc = (int)c;
	if (0 <= cc && cc <= 127)
		write(fd, &cc, 1);
	if (128 <= cc && cc <= 2047)
	{
		byte = (192 + (cc / 64));
		write(fd, &byte, 1);
		byte = (128 + (cc % 64));
		write(fd, &byte, 1);
	}
	if (2048 <= cc && cc <= 65535)
	{
		byte = (224 + (cc / 4096));
		write(fd, &byte, 1);
		byte = (128 + ((cc / 4096) / 64));
		write(fd, &byte, 1);
		byte = (128 + (cc % 64));
		write(fd, &byte, 1);
	}
	return ;
}

/*
**int		main(void)
**{
**int		c = 32;
**while (c++ < 127)
**ft_putchar_fd(c, 1);
**return 0;
**}
*/

/*
**int		main(void)
**{
**int		c =192;
**ft_putchar_fd(c, 1);
**c = 8224;
**ft_putchar_fd(c, 1);
**return (0);
**}
*/
