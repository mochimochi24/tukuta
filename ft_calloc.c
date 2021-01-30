/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito </var/mail/yayito>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 06:00:20 by yayito            #+#    #+#             */
/*   Updated: 2021/01/31 06:53:22 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*po;

	po = (void*)malloc(n * size);
	if (!po)
		return (NULL);
	while (n > 0)
	{
		po =;
		po++;
		n--;
	}
	return (ptr);
}

int		main(void)
{
	printf("address...%p", ft_calloc(1, 1));
	return (0);
}
