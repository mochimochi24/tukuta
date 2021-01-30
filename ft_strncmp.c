/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 22:35:47 by yayito            #+#    #+#             */
/*   Updated: 2021/01/31 04:21:03 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{

	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;
	int				ret;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	i = 0;
	while (n > 0)
	{
		if (str1[i] == '\0' && str2[i] == '\0')
			return (0);
		if (str1[i] != str2[i])
		{
			ret = (unsigned char)(str1[i] - str2[i]);
			return (ret);
		}
		i++;
		n--;
	}
	return (0);
}

/*
**int		main(void)
**{
**char	s1[10] = "abc123\0aa";
**char	s2[10] = "abc123\0Ba";
**size_t	n = 8;
**
**printf("%d\n", ft_strncmp(s1, s2, n));
**printf("%d", strncmp(s1, s2, n));
**return (0);
**}
*/
