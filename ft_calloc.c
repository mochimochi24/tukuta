/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 06:00:20 by yayito            #+#    #+#             */
/*   Updated: 2021/02/01 11:56:47 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*po;
	size_t	i;

	if (n == 0 || !n)
		n = 1;
	if (size == 0 || !size)
		size = 1;
	i = (n * size);
	po = (void*)malloc(n * size);
	if (!po)
		return (NULL);
	n *= size;
	while (i > 0)
	{
		po = 0;
		po++;
		i--;
	}
	return (po);
}

/*
**int		main(void)
**{
**	printf("address...%p", ft_calloc(1, 1));
**	return (0);
**}
*/
