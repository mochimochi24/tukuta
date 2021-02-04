/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 18:43:49 by yayito            #+#    #+#             */
/*   Updated: 2021/02/04 21:53:52 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	setdesuka(char const a, char const *set)
{
	int		i;

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
	char	*ret;
	int		hidari;
	int		migi;
	int		i;

	i = 0;
	hidari = 0;
	while (s1[hidari] && setdesuka(s1[hidari], set) == 1)
		hidari++;
	migi = ft_strlen(s1) - 1;
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
**	char	*s1 = "Hello \t  Please\n Trim me !";
**	char	*set = " \n\t";
**
**	printf("%s", ft_strtrim(s1, set));
**	return (0);
**}
*/
