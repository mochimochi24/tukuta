/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:08:12 by yayito            #+#    #+#             */
/*   Updated: 2021/02/06 15:07:09 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	unsigned char	*bu1;
	unsigned char	*bu2;
	int				ret;
	size_t			i;

	if (n == 0)
		return (0);
	bu1 = (unsigned char*)buf1;
	bu2 = (unsigned char*)buf2;
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
**	char	*s1 = "\0";
**	char	*s2 = "a";
**	printf("mem...%d\n", memcmp(s1, s2, 8));
**	printf("ft...%d\n", ft_memcmp(s1, s2, 8));
**	return (0);
**}
*/
