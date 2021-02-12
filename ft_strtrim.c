/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 18:43:49 by yayito            #+#    #+#             */
/*   Updated: 2021/02/12 12:14:33 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	setdesuka(char const a, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (a == set[i++])
			return (1);
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char		*ret;
	long long	hidari;
	long long	migi;
	long long	i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	hidari = 0;
	while (s1[hidari] && setdesuka(s1[hidari], set) == 1)
		hidari++;
	migi = (long long)ft_strlen(s1) - 1;
	if (migi < 0)
		migi = 0;
	while (migi > hidari && setdesuka(s1[migi], set) == 1)
		migi--;
	ret = (char*)malloc(migi - hidari + 2);
	if (!ret)
		return (NULL);
	while (hidari <= migi)
		ret[i++] = s1[hidari++];
	ret[i] = '\0';
	return (ret);
}

/*
**int		main(void)
**{
**char	*s1 = "";
**char	*set = "";
**
**printf("%s\n", ft_strtrim(s1, set));
**return (0);
**}
*/
