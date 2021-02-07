/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 00:53:21 by yayito            #+#    #+#             */
/*   Updated: 2021/02/07 13:43:39 by yayito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	overlonglong(const char *nptr, int maina)
{
	long long	i;
	int			j;

	i = 0;
	j = 0;
	while ('0' <= nptr[j] && nptr[j] <= '9')
	{
		if (i >= 922337203685477581 && maina == 1)
			return (-1);
		if (i >= 922337203685477581 && maina != 1)
			return (0);
		if (i == 922337203685477580 && nptr[j] == '9' && maina == 1)
			return (-1);
		if (i == 922337203685477580 && nptr[j] == '9' && maina != 1)
			return (0);
		if (i == 922337203685477580 && nptr[j] == '8' && maina != -1)
			return (-1);
		i *= 10;
		i += (nptr[j] - '0');
		j++;
	}
	return (1);
}

int			ft_atoi(const char *nptr)
{
	int			i;
	int			maina;
	int			ret;

	i = 0;
	maina = 1;
	ret = 0;
	while (nptr[i] == 32 || (9 <= nptr[i] && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
		maina = -1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	if (overlonglong(&nptr[i], maina) <= 0)
		return (overlonglong(&nptr[i], maina));
	while ('0' <= nptr[i] && nptr[i] <= '9')
	{
		if (ret == 214748364 && nptr[i] == '8' && maina != 1)
			return (-2147483648);
		ret *= 10;
		ret += (nptr[i] - '0');
		i++;
	}
	return (ret * maina);
}

/*
**int		main(void)
**{
**char		n[20] = "   -2147483648ab24";
**char		p[20] = "   +2147483648";
**char		t[20] = "2147483649";
**char		r[20] = "-2147483649";
**char		a[20] = "     2147483647";
**char		b[20] = "     77777777777";
**char		c[20] = "8234567890123456789";
**char		cc[20] = "-8234567890123456789";
**char		d[30] = "9223372036854775807";
**char		dd[30] = "-9223372036854775805";
**char		e[30] = "9223372036854775808";
**char		f[30] = "-9223372036854775808";
**char		g[30] = "-9223372036854775809";
**char		h[30] = "-99223372036854775810";
**char		i[40] = "99999999999999999999999999";
**printf("ft.INTMIN.-2147483648................%d\n", ft_atoi(n));
**printf("or.INTMIN-2147483648.................%d\n", atoi(n));
**printf("ft.+2147483648.......................%d\n", ft_atoi(p));
**printf("or.+2147483648.......................%d\n", atoi(p));
**printf("ft.2147483649........................%d\n", ft_atoi(t));
**printf("or.2147483649........................%d\n", atoi(t));
**printf("ft.-2147483649.......................%d\n", ft_atoi(r));
**printf("or.-2147483649.......................%d\n", atoi(r));
**printf("ft.INTMAX.2147483647.................%d\n", ft_atoi(a));
**printf("or.INTMAX.2147483647.................%d\n", atoi(a));
**printf("ft.77777777777.......................%d\n", ft_atoi(b));
**printf("or.77777777777.......................%d\n", atoi(b));
**printf("ft.8234567890123456789...............%d\n", ft_atoi(c));
**printf("or.8234567890123456789...............%d\n", atoi(c));
**printf("ft.-8234567890123456789..............%d\n", ft_atoi(cc));
**printf("or.-8234567890123456789..............%d\n", atoi(cc));
**printf("ft.LONGLONGMAX.9223372036854775807...%d\n", ft_atoi(d));
**printf("or.LONGLONGMAX.9223372036854775807...%d\n", atoi(d));
**printf("ft.-9223372036854775805..............%d\n", ft_atoi(dd));
**printf("or.-9223372036854775805..............%d\n", atoi(dd));
**printf("ft.9223372036854775808...............%d\n", ft_atoi(e));
**printf("or.9223372036854775808...............%d\n", atoi(e));
**printf("ft.LONGLONGMIN.-9223372036854775808..%d\n", ft_atoi(f));
**printf("or.LONGLONGMIN.-9223372036854775808..%d\n", atoi(f));
**printf("ft.-9223372036854775809..............%d\n", ft_atoi(g));
**printf("or.-9223372036854775809..............%d\n", atoi(g));
**printf("ft.-99223372036854775810.............%d\n", ft_atoi(h));
**printf("or.-99223372036854775810.............%d\n", atoi(h));
**printf("ft.99999999999999999999999999........%d\n", ft_atoi(i));
**printf("or.99999999999999999999999999........%d\n", atoi(i));
**return (0);
**}
*/
