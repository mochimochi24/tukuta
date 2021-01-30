/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 11:36:24 by yayito            #+#    #+#             */
/*   Updated: 2021/01/31 04:18:26 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*de;
	unsigned char		*sr;
	size_t		i;
	unsigned char		moji;
	void		*ret;

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
**char		str1[10] = "123456789";
**const char	str2[10] = "abcde";
**char		*ptr = &str1[2];
**
**printf("pointer...%p\n", ft_memccpy(ptr, str2, '5', 4));
**printf("dest...%s", str1);
**return (0);
**}
*/
