/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 09:25:17 by yayito            #+#    #+#             */
/*   Updated: 2021/01/22 12:34:47 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	char		*bf1;
	const char	*bf2;
	size_t		i;

	bf1 = buf1;
	bf2 = buf2;
	i = 0;
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
**const char	str2[10] = "abcde";
**char		*ptr = &str1[2];
**
**ft_memcpy(ptr, str2, 4);
**printf("%s", str1);
**return (0);
**}
*/
