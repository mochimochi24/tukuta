/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 11:36:24 by yayito            #+#    #+#             */
/*   Updated: 2021/02/10 22:07:19 by yayito           ###   ########.fr       */
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
	if (s[i] == moji && n > i)
	{
		de[i] = s[i];
		i++;
		return ((void*)&de[i]);
	}
	return (NULL);
}
/*
**nclude <string.h>
**nclude <stdio.h>
**int		main(void)
**{
**char dst[3] = "a";
**char src[3] = "12";
**printf("dst = %p\n",dst);
**printf("or.adr...%s\n", memccpy(dst, src, '\0', 3));
**printf("or.dst...%s\n", dst);
**printf("ft.adr...%s\n",ft_memccpy(dst, src, '\0', 3));
**printf("ft.dst...%s\n", dst);
**return (0);
**}
*/
