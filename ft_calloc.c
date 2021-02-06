/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 06:00:20 by yayito            #+#    #+#             */
/*   Updated: 2021/02/06 15:11:26 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*po;

	if (n == 0 || !n)
		n = 1;
	if (size == 0 || !size)
		size = 1;
	po = (void*)malloc(n * size);
	if (!po)
		return (NULL);
	ft_bzero(po, n * size);
	return (po);
}

/*
**int		main(void)
**{
**	printf("address...%p", ft_calloc(1, 1));
**	return (0);
**}
*/
