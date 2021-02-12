/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 14:27:45 by yayito            #+#    #+#             */
/*   Updated: 2021/02/12 12:45:03 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	long long	leng;
	long long	slen;
	char		*ret;
	long long	i;
	long long	j;

	if (!s)
		return (NULL);
	j = 0;
	leng = (long long)len;
	if (len > 9000000000000000000 && len > 2000000000 && len > 30000)
		leng = 9000000000000000000;
	slen = (long long)ft_strlen(s);
	if (slen < (long long)start)
		return (ft_strdup(""));
	if ((slen - (long long)start) < leng)
		leng = (slen - (long long)start);
	i = (long long)start;
	ret = malloc(leng + 1);
	if (!ret)
		return (NULL);
	while (j < leng && s[i] && slen > (long long)start)
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
