/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 17:37:58 by yayito            #+#    #+#             */
/*   Updated: 2021/02/01 11:49:57 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_toupper(char c)
{
	if ('a' <= c && c <= 'z')
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
