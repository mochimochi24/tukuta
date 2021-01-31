/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 17:22:51 by yayito            #+#    #+#             */
/*   Updated: 2021/01/31 09:29:08 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isalnum(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (1);
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

/*
**int		main(void)
**{
**int		c = 80;
**printf("%d", ft_isalnum(c));
**return (0);
**}
*/
