/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito </var/mail/yayito>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:19:22 by yayito            #+#    #+#             */
/*   Updated: 2021/02/04 17:08:09 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	length_of_int(int nn)
{
	int	i;

	i = 0;
	while (nn >= 10)
	{
		i++;
		nn = (nn / 10);
	}
	i++;
	return (i);
}

static void	kakiko(int n, int keta, char *ret)
{
	ret[keta] = '\0';
	keta--;
	while (n >= 10)
	{
		ret[keta] = ((n % 10) + '0');
		n = (n / 10);
		keta--;
	}
	ret[keta] = (n + '0');
	return ;
}

char 		*ft_itoa(int n)
{
	int		i;
	char	*ret;
	int		maina;

	maina = 0;
	if (n < 0)
	{
		maina = 1;
		n *= -1;
	}
	i = length_of_int(n);
	ret = (char*)malloc(i + maina + 1);
	if (!ret)
		return (NULL);
	if (n == -2147483648)
	{
		ret = "-2147483648";
		return (ret);
	}
	kakiko(n, i + maina, ret);
	if (maina == 1)
		ret[0] = '-';
	return (ret);
}

/*
**int			main(void)
**{
**	printf("%s", ft_itoa(-2147483648));
**	return (0);
**}
*/
