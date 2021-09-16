/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 21:35:09 by mjose-ye          #+#    #+#             */
/*   Updated: 2021/09/07 14:59:54 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	resu;
	int	sign;
	int	cont;

	resu = 0;
	sign = 1;
	cont = 0;
	while ((str[cont] >= '\t' && str[cont] <= '\r') || str[cont] == ' ')
		cont++;
	if (str[cont] == '-' || str[cont] == '+')
	{
		if (str[cont] == '-')
			sign = -1;
		cont++;
	}
	while (ft_isdigit(str[cont]))
	{
		resu = resu * 10 + str[cont] - '0';
		cont++;
	}
	return (sign * resu);
}
