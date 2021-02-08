/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 11:36:24 by yayito            #+#    #+#             */
/*   Updated: 2021/02/09 05:11:54 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*de;
	unsigned char		*s;
	size_t				i;
	unsigned char		moji;
	void				*ret;

	de = (unsigned char*)dest;
	s = (unsigned char*)src;
	moji = (unsigned char)c;
	i = 0;
	while (i < n && s[i] != moji)
	{
		de[i] = s[i];
		i++;
	}
	if (s[i] == moji && n != 0)
	{
		de[i] = s[i];
		i++;
		ret = (void*)&de[i];
		return (ret);
	}
	return (NULL);
}
/*
**#include <stri
**#include <stdi
**int		main(void)
**{
**char	buff1[] = "";
**char	buff2[] = "";
**char	*src = "";
**printf("ret.or...%p\n", memccpy(buff1, src, 0, 0));
**printf("ret.ft...%p\n", ft_memccpy(buff2, src, 0, 0));
**
**printf("memccpy...%s\n", buff1);
**printf("ft...%s", buff2);
**return (0);
**}
*/
