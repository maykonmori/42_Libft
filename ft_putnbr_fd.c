/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 20:58:24 by mjose-ye          #+#    #+#             */
/*   Updated: 2021/09/09 21:18:00 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	size_t	cont;

	cont = 0;
	if (n < 0)
	{
		write(fd, "-", 1);
		if (n == -2147483648)
		{
			n++;
			n = -n;
			cont = 1;
		}
		else
			n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd((n / 10), fd);
	ft_putchar_fd((n % 10 + '0' + cont), fd);
}
