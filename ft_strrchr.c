/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 21:33:55 by yayito            #+#    #+#             */
/*   Updated: 2021/01/26 21:41:36 by yayito           ###   ########.fr       */
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
	if (ret)
		return (ret);
	return (NULL);
}

/*
**int		main(void)
**{
**	char	c = 'a';
**	char	s[10] = "123abzab";
**	printf("%s\n", ft_strrchr(s, c));
**	printf("%s", strrchr(s, c));
**	return (0);
**}
*/
