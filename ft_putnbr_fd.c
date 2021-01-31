/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 09:55:05 by yayito            #+#    #+#             */
/*   Updated: 2021/01/31 11:17:27 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	wri[12];

	i = 0;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	if (n < 0)
	{
		ft_putchar_fd("-", fd);
		n *= -1;
	}
	while (n < 10)
	{
		wri[i] = (n % 10);
		n /= 10;
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

int		main(void)
{
	ft_putnbr_fd(123455, 1);
	return (0);
}
