/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 09:37:15 by yayito            #+#    #+#             */
/*   Updated: 2021/02/09 05:39:20 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;
	char	str;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		str = s[i];
		write(fd, &str, 1);
		i++;
	}
	return ;
}
