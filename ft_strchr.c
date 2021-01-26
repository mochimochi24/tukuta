/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:17:23 by yayito            #+#    #+#             */
/*   Updated: 2021/01/26 21:32:30 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int			i;
	char		*ret;
	char		cc;

	cc = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
		{
			ret = (char*)&s[i];
			return (ret);
		}
		i++;
	}
	return (NULL);
}

int		main(void)
{
	char	c = '3';
	char	s[10] = "123abcde";
	printf("%s\n", ft_strchr(s, c));
	printf("%s", strchr(s, c));
	return (0);
}
