/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 11:36:24 by yayito            #+#    #+#             */
/*   Updated: 2021/02/06 15:06:04 by yayito           ###   ########.fr       */
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
	if (s[i] == moji)
	{
		de[i] = s[i];
		i++;
		ret = (void*)&de[i];
		return (ret);
	}
	return (NULL);
}

/*
**int		main(void)
**{
**char	buff1[] = "abcdefghijklmnopqrstuvwxyz";
**char	buff2[] = "abcdefghijklmnopqrstuvwxyz";
**char	*src = "string with\200inside !";
**memccpy(buff1, src, 116, 21);
**ft_memccpy(buff2, src, 116, 21);
**
**Xchar		str1[10] = "123456789";
**Xconst char	str2[10] = "abcde";
**Xchar		*ptr = &str1[2];
**
**Xprintf("pointer...%p\n", ft_memccpy(ptr, str2, '5', 4));
**Xprintf("dest...%s", str1);
**printf("memccpy...%s\n", buff1);
**printf("ft...%s", buff2);
**return (0);
**}
*/
