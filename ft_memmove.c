/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 12:35:50 by yayito            #+#    #+#             */
/*   Updated: 2021/01/31 04:20:25 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	char		*bf1;
	const char	*bf2;
	size_t		i;

	if (!buf1 || !buf2)
		return (NULL);
	bf1 = buf1;
	bf2 = buf2;
	i = 0;
	if (bf1 > bf2)
	{
		i = n;
		while (i > 0)
		{
			i--;
			bf1[i] = bf2[i];
		}
		return (buf1);
	}
	while (i < n)
	{
		bf1[i] = bf2[i];
		i++;
	}
	return (buf1);
}

/*
**int		main(void)
**{
**
**char		str1[10] = "123456789";
**char		str3[10] = "123456789";
**const char	str2[10] = "abcde";
**char		*ptr = &str1[2];
**const char	*pt2 = &str2[0];
**char		*ptr3 = &str3[2];
**
**ft_memmove(ptr, pt2, 0);
**printf("ft...%s\n", str1);
**memmove(ptr3, pt2, 0);
**printf("honmono...%s", str3);
**return (0);
**}
*/
