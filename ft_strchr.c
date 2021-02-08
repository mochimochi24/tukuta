/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:17:23 by yayito            #+#    #+#             */
/*   Updated: 2021/02/09 05:14:28 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;
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
	if (s[i] == cc)
	{
		ret = (char*)&s[i];
		return (ret);
	}
	return (NULL);
}

/*
**int		main(void)
**{
**char	c = '\0';
**char	s[10] = "";
**printf("ft...%s\n", ft_strchr(s, c));
**printf("strchr...%s", strchr(s, c));
**return (0);
**}
*/
