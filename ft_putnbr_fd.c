/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 09:55:05 by yayito            #+#    #+#             */
/*   Updated: 2021/02/04 21:45:39 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	int		wri[12];

	i = 0;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd(45, fd);
		n *= -1;
	}
	while (n >= 10)
	{
		wri[i] = (n % 10);
		n = (n / 10);
		i++;
	}
	wri[i] = n;
	while (i >= 0)
		ft_putchar_fd((wri[i--] + '0'), fd);
	return ;
}

/*
**int		main(void)
**{
**	ft_putnbr_fd(-483647, 1);
**	return (0);
**}
*/
