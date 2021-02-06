/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 01:58:48 by yayito            #+#    #+#             */
/*   Updated: 2021/02/06 15:12:40 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*ret;

	i = 0;
	j = 0;
	ret = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ret)
		return (NULL);
	while (s1[i])
	{
		ret[i] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		ret[j++] = s2[i++];
	}
	ret[j] = '\0';
	return (ret);
}

/*
**int		main(void)
**{
**	printf("%s", ft_strjoin("42", "tokyo"));
**	return (0);
**}
*/
