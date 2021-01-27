/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 17:37:58 by yayito            #+#    #+#             */
/*   Updated: 2021/01/27 17:45:13 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_toupper(char c)
{
	int		ret;

	ret = (int)c;
	if ('a' <= c && c <= 'z')
		ret = (int)(c - 32);
	return (ret);
}

/*
**int		main(void)
**{
**char	c = 'a';
**char	d = '~';
**printf("%d\n", ft_toupper(c));
**printf("%d", ft_toupper(d));
**return (0);
**}
*/
