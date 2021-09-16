/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:00:47 by mjose-ye          #+#    #+#             */
/*   Updated: 2021/09/09 16:36:01 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	cont;

	cont = 0;
	if (s == 0 || f == 0)
	{
		return ;
	}
	while (s[cont] != '\0')
	{
		f(cont, s + cont);
		cont++;
	}
}
