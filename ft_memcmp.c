/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:08:12 by yayito            #+#    #+#             */
/*   Updated: 2021/02/01 10:28:11 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	const char	*bu1;
	const char	*bu2;
	int			ret;
	size_t		i;

	if (n == 0)
		return (0);
	bu1 = (const char*)buf1;
	bu2 = (const char*)buf2;
	i = 0;
	while (i < n)
	{
		if (bu1[i] != bu2[i])
			break ;
		i++;
	}
	if (i == n)
		i--;
	ret = (bu1[i] - bu2[i]);
	if (ret > 0)
		return (1);
	if (ret < 0)
		return (-1);
	return (0);
}

/*
**int		main(void)
**{
**	const char	str1[100] = "abcMACOSX";
**	const char	str2[100] = "abcMBS";
**	printf("mem...%d\n", memcmp(str1, str2, 3));
**	printf("ft...%d\n", ft_memcmp(str1, str2, 3));
**	printf("mem...%d\n", memcmp(str1, str2, 4));
**	printf("ft...%d\n", ft_memcmp(str1, str2, 4));
**	printf("mem...%d\n", memcmp(str1, str2, 5));
**	printf("ft...%d", ft_memcmp(str1, str2, 5));
**	return (0);
**}
*/
