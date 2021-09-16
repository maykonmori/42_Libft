/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 20:26:47 by mjose-ye          #+#    #+#             */
/*   Updated: 2021/09/10 22:35:49 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
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
	ft_putchar_fd('\n', fd);
}
