/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 06:00:20 by yayito            #+#    #+#             */
/*   Updated: 2021/01/31 09:28:38 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*po;

	if (n == 0 || size == 0)
	{
		n = 1;
		size = 1;
	}
	po = (void*)malloc(n * size);
	if (!po)
		return (NULL);
	while (n > 0)
	{
		po = 0;
		po++;
		n--;
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
