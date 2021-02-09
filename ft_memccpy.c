/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 11:36:24 by yayito            #+#    #+#             */
/*   Updated: 2021/02/10 05:21:52 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*de;
	unsigned char		*s;
	size_t				i;
	unsigned char		moji;

	if ((!dest || !src) && n == 0)
		return (NULL);
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
		if (de[i] != '\0')
			return ((void*)&de[i]);
	}
	return (NULL);
}
/*
**nclude <string.h>
**nclude <stdio.h>
**int		main(void)
**{
**char dst[10] = "aa";
**char src[10] = "cc";
**printf("dst = %p\n",dst);
**char dst2[10] = "aa";
**char src2[10] = "cc";
**printf("dst = %p\n",dst2);
**printf("or.adr...%p\n", memccpy(dst, src, '\0', 2));
**printf("or.dst...%s\n", dst);
**printf("ft.adr...%p\n",ft_memccpy(dst2, src2, '\0', 2));
**printf("ft.dst...%s\n", dst2);
**return (0);
**}
*/
