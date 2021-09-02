/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 13:45:16 by mjose-ye          #+#    #+#             */
/*   Updated: 2021/08/31 23:50:29 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	aux;
	void	*c;

	aux = num * size;
	c = malloc(aux);
	if (!c)
		return (0);
	ft_bzero(c, aux);
	return (c);
}
