/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 21:43:47 by yayito            #+#    #+#             */
/*   Updated: 2021/01/26 22:24:55 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ret;

	i = 0;
	if (little[0] == '\0')
		return ((char*)big);
	while (i < len && big[i])
	{
		j = 0;
		while ((i + j) < len && little[j])
		{
			if (big[i + j] != little[j])
				break ;
			j++;
			if (little[j] == '\0')
			{
				ret = (char*)&big[i];
				return (ret);
			}
		}
		i++;
	}
	return (NULL);
}

/*
**int		main(void)
**{
**	const char	b[10] = "123abcab";
**	const char	li[10] = "ab";
**	size_t		le = 5;
**
**	printf("%s\n", ft_strnstr(b, li, le));
**	printf("%s", strnstr(b, li, le));
**}
*/
