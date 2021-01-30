/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 11:36:24 by yayito            #+#    #+#             */
/*   Updated: 2021/01/31 07:49:38 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*de;
	unsigned char		*sr;
	size_t				i;
	unsigned char		moji;
	void				*ret;

	if (!dest || !src)
		return (NULL);
	moji = (unsigned char)c;
	de = (unsigned char*)dest;
	sr = (unsigned char*)src;
	i = 0;
	while (i < n && de[i] != moji)
	{
		de[i] = sr[i];
		i++;
	}
	if (de[i] == moji)
	{
		de[i] = sr[i];
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
**memccpy(buff1, src, 0600, 21);
**ft_memccpy(buff2, src, 0600, 21);
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
