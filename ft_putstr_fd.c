/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:24:16 by mjose-ye          #+#    #+#             */
/*   Updated: 2021/09/10 23:04:33 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	cont;

	if (!s)
		return ;
	cont = 0;
	while (s[cont] != '\0')
	{
		write(fd, &s[cont], 1);
		cont++;
	}
}
