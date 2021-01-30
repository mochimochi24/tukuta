/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:21:05 by yayito            #+#    #+#             */
/*   Updated: 2021/01/31 04:18:09 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	const char	*bu;
	char		c;
	int			i;
	void		*ret;

	bu = (const char*)buf;
	c = (char)ch;
	i = 0;
	while (n > 0)
	{
		if (bu[i] == c)
		{
			ret = (void*)&bu[i];
			return (ret);
		}
		i++;
		n--;
	}
	return (NULL);
}

/*
**int		main(void)
**{
**char	str[10] = "1234567";
**printf("6nobasho...%p\n", ft_memchr(&str, '6', 5));
**printf("3nobasho...%p", ft_memchr(&str, '3', 5));
**return (0);
**}
*/
