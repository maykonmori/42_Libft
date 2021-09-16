/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 22:36:00 by mjose-ye          #+#    #+#             */
/*   Updated: 2021/09/10 23:04:04 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(int n);
static char	*conv_sign(int n, int con, char *res, int len);

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		con;

	con = 0;
	len = intlen(n);
	res = ft_calloc((len + 1), sizeof(char));
	if (!res)
		return (NULL);
	if (n == 0)
		res[0] = '0';
	conv_sign(n, con, res, len);
	return (res);
}

static char	*conv_sign(int n, int con, char *res, int len)
{
	while (n != 0)
	{
		if (n < 0)
		{
			res[0] = '-';
			if (n == -2147483648)
			{
				n = n + 1;
				con = 1;
			}
			n = n * -1;
		}
		res[--len] = (n % 10) + '0';
		n = n / 10;
	}
	if (con == 1)
		res[10] += con;
	return (res);
}

static int	intlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}
