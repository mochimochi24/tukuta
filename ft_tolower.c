/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 17:44:11 by yayito            #+#    #+#             */
/*   Updated: 2021/02/01 11:00:17 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	return (c);
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
