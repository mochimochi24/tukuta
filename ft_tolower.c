/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 17:44:11 by yayito            #+#    #+#             */
/*   Updated: 2021/01/31 02:53:56 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_tolower(char c)
{
	int		ret;

	ret = (int)c;
	if ('A' <= c && c <= 'Z')
		ret = (c + 32);
	return (ret);
}

/*
**int		main(void)
**{
**char	c = 'A';
**char	d = 'b';
**printf("%c\n", ft_tolower(c));
**printf("%c", ft_tolower(d));
**return (0);
**}
*/
