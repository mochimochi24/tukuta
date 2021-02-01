/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 17:37:58 by yayito            #+#    #+#             */
/*   Updated: 2021/02/01 12:13:49 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	return (c);
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
