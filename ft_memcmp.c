/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:08:12 by yayito            #+#    #+#             */
/*   Updated: 2021/02/01 12:17:57 by yayito           ###   ########.fr       */
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
	ret = (unsigned char)(bu1[i] - bu2[i]);
	return (ret);
}

/*
int		main(void)
{
	char	*s1 = "\xff\xaa\xde\200";
	char	*s2 = "\xff\xaa\xde\0";
	printf("mem...%d\n", memcmp(s1, s2, 8));
	printf("ft...%d\n", ft_memcmp(s1, s2, 8));
	return (0);
}
*/
