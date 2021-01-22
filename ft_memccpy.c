/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 11:36:24 by yayito            #+#    #+#             */
/*   Updated: 2021/01/22 12:29:52 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*de;
	const char	*sr;
	size_t		i;
	char		moji;
	void		*ret;

	moji = c;
	de = dest;
	sr = src;
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
**#ifndef TEST
**
**int		main(void)
**{
**char		str1[10] = "123456789";
**const char	str2[10] = "abcde";
**char		*ptr = &str1[2];
**
**printf("%p\n", ft_memccpy(ptr, str2, '5', 4));
**printf("%s", str1);
**return (0);
**}
**
**#endif
*/
