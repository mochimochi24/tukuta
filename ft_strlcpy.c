/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 21:23:22 by yayito            #+#    #+#             */
/*   Updated: 2021/01/23 20:48:51 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t			i;
	size_t			j;
	size_t			n;

	i = 0;
	j = 0;
	n = size;
	size--;
	while (src[i] && size >= 1)
	{
		size--;
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	if (n > 0)
		while (src[j])
			j++;
	return (j);
}

/*
**int               main(void)
**{
**char  des[10] = "123";
**char  sr[10] = "abcde";
**char  *pt1 = &des[0];
**char  *pt2 = &sr[0];
**printf("return...%lu\n", ft_strlcpy(pt1, pt2, 5));
**printf("dest...%s", des);
**return (0);
**}
*/
