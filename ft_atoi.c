/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 00:53:21 by yayito            #+#    #+#             */
/*   Updated: 2021/01/27 03:30:47 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(const char *nptr)
{
	int		i;
	int		maina;
	int		ret;

	i = 0;
	maina = 0;
	ret = 0;
	while (nptr[i] == 32 || (9 <= nptr[i] && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
		maina = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while ('0' <= nptr[i] && nptr[i] <= '9')
	{
		ret *= 10;
		ret += (nptr[i] - '0');
		i++;
	}
	if (maina == 1)
		ret *= -1;
	return (ret);
}

/*
**int		main(void)
**{
**char	n[20] = "  +4242ab24";
**printf("%d\n", ft_atoi(n));
**printf("%d", atoi(n));
**return (0);
**}
*/