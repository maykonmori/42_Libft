/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:38:18 by mjose-ye          #+#    #+#             */
/*   Updated: 2022/02/01 12:48:35 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	aux;

	aux = 0;
	if(!str)
		return (0);
	while (str[aux] != '\0')
	{
		aux++;
	}
	return (aux);
}
