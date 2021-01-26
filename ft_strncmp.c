/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 22:35:47 by yayito            #+#    #+#             */
/*   Updated: 2021/01/26 23:38:23 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		ret;

	i = 0;
	while (n > 0 && s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	ret = (int)(s1[i] - s2[i]);
	return (ret);
}

/*
**int		main(void)
**{
**char	s1[10] = "abc123\0ab";
**char	s2[10] = "abc123\0BZ";
**size_t	n = 8;
**
**printf("%d\n", ft_strncmp(s1, s2, n));
**printf("%d", strncmp(s1, s2, n));
**return (0);
**}
*/
