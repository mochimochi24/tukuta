/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 09:55:05 by yayito            #+#    #+#             */
/*   Updated: 2021/02/01 13:33:34 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//void	ft_putchar_fd(char c, int fd)
//{
//	write(fd, &c, 1);
//		return ;
//}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	int		wri[12];

	i = 0;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
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
	{
		ft_putchar_fd(wri[i], fd);
		i--;
	}
	return ;
}

/*
int		main(void)
{
	int		n = 123455;
	int		i = 0;
	int		wri[12];
	while (n >= 10)
	{
		wri[i] = (n % 10);
		n = (n / 10);
		i++;
	}
	printf("%d, %d, %d, %d, %d, %d", wri[0], wri[1], wri[2], wri[3], wri[4], wri[5]);
	return (0);
}
*/
