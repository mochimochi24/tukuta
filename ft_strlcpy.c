/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 21:23:22 by yayito            #+#    #+#             */
/*   Updated: 2021/02/06 15:07:38 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t			i;
	size_t			j;
	size_t			n;

	i = 0;
	j = 0;
	n = size;
	if (n > 0)
		size--;
	while (src[i] && size >= 1)
	{
		size--;
		dest[i] = src[i];
		i++;
	}
	if (n > 0)
		dest[i] = '\0';
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
**char  dess[10] = "123";
**char  *pt1s = &dess[0];
**printf("return.ft...%lu\n", ft_strlcpy(pt1, pt2, 7));
**printf("dest.ft...%s\n", des);
**printf("return...%lu\n", strlcpy(pt1s, pt2, 7));
**printf("dest...%s", dess);
**return (0);
**}
*/
