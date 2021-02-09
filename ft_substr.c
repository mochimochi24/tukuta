/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 14:27:45 by yayito            #+#    #+#             */
/*   Updated: 2021/02/09 06:50:39 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*ret;
	size_t	i;
	size_t	j;

	j = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen < (size_t)start)
		return (ft_strdup(""));
	if ((slen - (size_t)start) < len)
		len = (slen - (size_t)start);
	i = (size_t)start;
	ret = malloc(len + 1);
	if (!ret)
		return (NULL);
	while (j < len && s[i] && (unsigned int)slen > start)
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
