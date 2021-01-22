/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 12:35:50 by yayito            #+#    #+#             */
/*   Updated: 2021/01/22 13:17:15 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	char		*bf1;
	const char	*bf2;
	size_t		i;

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
**char		str2[10] = "123456789";
**char		*ptr = &str1[2];
**const char	*pt2 = &str1[0];
**
**ft_memmove(ptr, pt2, 4);
**printf("%s\n", str1);
**ptr = &str2[0];
**pt2 = &str2[2];
**ft_memmove(ptr, pt2, 4);
**printf("%s", str2);
**return (0);
**}
*/
