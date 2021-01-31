/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 08:50:10 by yayito            #+#    #+#             */
/*   Updated: 2021/01/31 09:27:53 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(const char *s)
{
	size_t	i;
	char	*po;

	i = (ft_strlen(s) + 1);
	po = (void*)malloc(i);
	if (!po)
		return (NULL);
	ft_memcpy(po, s, i);
	return (po);
}
