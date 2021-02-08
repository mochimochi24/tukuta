/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 14:27:45 by yayito            #+#    #+#             */
/*   Updated: 2021/02/09 05:33:48 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;
	size_t	j;

	j = 0;
	if (!s)
		return (NULL);
	i = (size_t)start;
	ret = (char*)malloc(len + 1);
	if (!ret)
		return (NULL);
	while (j < len && s[i] && (unsigned int)ft_strlen(s) > start)
		ret[j++] = s[i++];
	ret[j] = '\0';
	return (ret);
}

/*
**int		main(void)
**{
**	char	*str;
**	str = ft_substr("aiueo", 10, 10);
**	printf("%s", str);
**	free(str);
**	return (0);
**}
*/
