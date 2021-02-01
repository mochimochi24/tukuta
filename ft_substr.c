/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 14:27:45 by yayito            #+#    #+#             */
/*   Updated: 2021/02/02 00:46:49 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;
	size_t	j;

	j = 0;
	i = (size_t)start;
	ret = (char*)malloc(len + 1);
	if (!ret)
		return (NULL);
	while (j < len)
	{
		if (!s[i])
			break ;
		ret[j++] = s[i++];
	}
	if (i < len)
		ret[j] = s[i];
	return (ret);
}

/*
int		main(void)
{
	char	*str;
	str = ft_substr("aiueo", 2, 2);
	printf("%s", str);
	free(str);
	return (0);
}
*/
