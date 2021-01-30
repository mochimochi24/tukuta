/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 21:33:55 by yayito            #+#    #+#             */
/*   Updated: 2021/01/31 04:19:01 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ret;
	char	cc;

	cc = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			ret = (char*)&s[i];
		i++;
	}
	if (s[i] == cc)
		ret = (char*)&s[i];
	if (ret)
		return (ret);
	return (NULL);
}

/*
**int		main(void)
**{
**char	c = '\0';
**char	s[10] = "";
**printf("ft...%s\n", ft_strrchr(s, c));
**printf("strrchr...%s", strrchr(s, c));
**return (0);
**}
*/
