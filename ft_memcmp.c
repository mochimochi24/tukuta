/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:08:12 by yayito            #+#    #+#             */
/*   Updated: 2021/01/22 18:50:39 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	const char	*bu1;
	const char	*bu2;
	int			ret;
	size_t		i;

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
	return (ret);
}

/*
**int		main(void)
**{
**	const char	str1[10] = "123\0a67";
**	const char	str2[10] = "123\0a11";
**	printf("%d\n", ft_memcmp(str1, str2, 2));
**	printf("%d\n", ft_memcmp(str1, str2, 5));
**	printf("%d", ft_memcmp(str1, str2, 7));
**	return (0);
**}
*/
