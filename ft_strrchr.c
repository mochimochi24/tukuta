/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 21:33:55 by yayito            #+#    #+#             */
/*   Updated: 2021/02/06 15:08:26 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ret;
	char	cc;
	int		flug;

	flug = 0;
	cc = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
		{
			ret = (char*)&s[i];
			flug = 1;
		}
		i++;
	}
	if (s[i] == cc)
	{
		ret = (char*)&s[i];
		flug = 1;
	}
	if (flug == 1)
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
