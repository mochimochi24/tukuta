/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 08:33:36 by yayito            #+#    #+#             */
/*   Updated: 2021/01/31 08:25:18 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			i;
	size_t			j;
	size_t			lende;
	size_t			lensr;
	size_t			mojisuu;

	j = 0;
	lende = ft_strlen(dest);
	lensr = ft_strlen(src);
	i = lende;
	mojisuu = (size - lende - 1);
	if (size <= lende)
		mojisuu = 0;
	while (mojisuu > 0 && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
		mojisuu--;
	}
	dest[i] = '\0';
	if (size > lende)
		return (lende + lensr);
	return (lensr + size);
}

/*
**int				main(void)
**{
**char	des[10] = "12345";
**char	sr[10] = "abc";
**char	*pt1 = &des[0];
**char	*pt2 = &sr[0];
**printf("return...%lu\n", strlcat(pt1, pt2, 2));
**printf("dest...%s", des);
**return (0);
**}
*/
