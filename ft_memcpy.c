/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 09:25:17 by yayito            #+#    #+#             */
/*   Updated: 2021/02/06 14:23:11 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	char		*bf1;
	const char	*bf2;
	size_t		i;

	if (!buf1 && !buf2)
		return (NULL);
	bf1 = (char*)buf1;
	bf2 = (const char*)buf2;
	i = 0;
	while (i < n)
	{
		bf1[i] = bf2[i];
		i++;
	}
	return (buf1);
}

/*
**int		main(void)
**{
**
**	char		str1[10] = "123456789";
**	char		str3[10] = "123456789";
**	const char	str2[10] = "abcde";
**	char		str0[10] = "";
**	char		*ptr = &str1[2];
**	char		*ptr3 = &str3[2];
**	char		*ptrn = NULL;
**
**	ft_memcpy(ptrn, str0, 4);
**	printf("ft...%s\n", str0);
**	memcpy(ptrn, str0, 4);
**	printf("ft...%s", str0);
**	return (0);
**}
*/
