/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 21:57:10 by yayito            #+#    #+#             */
/*   Updated: 2021/02/05 17:55:19 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static char	**nulnul(void)
{
	char	**nu;

	nu = (char**)malloc(sizeof(char) * 1);
	nu[0] = NULL;
	return (nu);
}

static char	**makepoipoi(char const *s, char c)
{
	char	**poipoi;
	int		i;
	int		yousosu;

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
	poipoi = (char**)malloc((sizeof(char*) * yousosu) + 1);
	if (!poipoi)
		return (NULL);
	poipoi[yousosu + 1] = NULL;

//	DEBUG
//	printf("yousosu...%d\n", yousosu);

	return (poipoi);
}

static int	partlen(char const *s, char c, int j)
{
	int		i;

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
	int		i;

	i = 0;
	while (ret[i])
		free(ret[i++]);
	free(ret);
	return (NULL);
}

static char **fillret(char const *s, char c, char **ret)
{
	int		i;
	int		j;
	int		leng;
	int		nn;

	nn = 0;
	j = 0;
	i = 0;
	while (ret[i] != NULL && s[j])
	{
		while (s[j] == c)
			j++;
		leng = partlen(s, c, j);

//		DEBUG
//		if (i > 0)
//			printf("i=%D.ret[0]daijobu?...%s\n", i, ret[0]);

		ret[i] = (char*)malloc(leng + 1);

//		DEBUG
//		if(i > 0)
//			printf("i=%D.ret[0]daijobu?...%s\n", i, ret[0]);

		if (!ret[i])
			return (zenkesi(ret));
		while (s[j] && s[j] != c)
			ret[i][nn++] = s[j++];
		ret[i][nn] = '\0';
		nn = 0;

//		DEBUG
//		printf("i = %d\n",i);
//		printf("partlen...%d\n",leng);
//		printf("ret[0]...%s\n",ret[0]);
//		if (i >= 1)
//			printf("ret[1]...%s\n",ret[1]);
//		if (i >= 2)
//			printf("ret[2]...%s\n",ret[2]);
//		if (i >= 3)
//			printf("ret[3]...%s\n",ret[3]);
//		if (i >= 4)
//			printf("ret[4]...%s\n",ret[4]);
//		printf("\n");

		i++;
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;

	if (s[0] == '\0' && c =='\0')
		return (nulnul());
	ret = makepoipoi(s, c);
	if (!ret)
		return (NULL);
	return (fillret(s, c, ret));
}

/*
int		main(void)
{
//	char	str[35] = "7first7second777third77fourth!!";
	char	str[35] = "7first7second7third777";
	char	*ptr;
	char	**re;
//	int		i = 0;

	ptr = &str[0];
	re = ft_split(ptr, '7');
//	printf("%s\n", re[0]);
//	printf("%s\n", re[1]);
//	printf("%s\n", re[2]);
//	printf("%s", re[3]);
//	while (re[i] != 0)
//	{
//		printf("re[%d] = %s\n",i , re[i]);
//		i++;
//	}
	return (0);
}
*/
