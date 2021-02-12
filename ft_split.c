/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 21:57:10 by yayito            #+#    #+#             */
/*   Updated: 2021/02/11 13:27:47 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**makepoipoi(char const *s, char c)
{
	char		**poipoi;
	long long	i;
	long long	yousosu;

	yousosu = 0;
	if (s[0] != c)
		yousosu++;
	i = 0;
	if (s[0] != '\0')
		i++;
	while (s[i])
	{
		if (s[(i - 1)] == c && s[i] != c)
			yousosu++;
		i++;
	}
	poipoi = (char**)malloc(sizeof(char*) * (yousosu + 1));
	if (!poipoi)
		return (NULL);
	poipoi[yousosu] = NULL;
	return (poipoi);
}

static int	partlen(char const *s, char c, int j)
{
	long long	i;

	i = 0;
	while (s[j] != '\0' && s[j] != c)
	{
		j++;
		i++;
	}
	return (i);
}

static char	**zenkesi(char **ret)
{
	long long	i;

	i = 0;
	while (ret[i])
		free(ret[i++]);
	free(ret);
	return (NULL);
}

static char	**fillret(char const *s, char c, char **ret)
{
	long long	i;
	long long	j;
	long long	leng;
	long long	nn;

	nn = 0;
	j = 0;
	i = 0;
	while (s[j])
	{
		while (s[j] == c)
			j++;
		if (!s[j])
			break ;
		leng = partlen(s, c, j);
		ret[i] = (char*)malloc(leng + 1);
		if (!ret[i])
			return (zenkesi(ret));
		while (s[j] && s[j] != c)
			ret[i][nn++] = s[j++];
		ret[i][nn] = '\0';
		nn = 0;
		i++;
	}
	return (ret);
}

char		**ft_split(char const *s, char c)
{
	char	**ret;

	if (!s)
		return (NULL);
	if (s[0] == '\0')
	{
		ret = (char**)malloc(sizeof(char*) * 1);
		ret[0] = NULL;
		return (ret);
	}
	ret = makepoipoi(s, c);
	if (!ret)
		return (ret);
	return (fillret(s, c, ret));
}

/*
**nclude <stdio.h>
**int		main(void)
**{
**char	str[50] = "";
**char	*ptr;
**char	**ret;
**int		i = 0;
**
**ptr = &str[0];
**ret = ft_split(ptr, '0');
**printf("result:\n");
**while (ret[i] != 0)
**{
**printf("ret[%d]...%s\n",i , ret[i]);
**i++;
**}
**printf("ret[%d]...%s = %p",i , ret[i], ret[i]);
**return (0);
**}
*/
