/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:55:11 by mjose-ye          #+#    #+#             */
/*   Updated: 2021/09/10 18:55:12 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	cont;
	size_t	dest_t;
	size_t	src_t;

	cont = 0;
	dest_t = ft_strlen(dest);
	src_t = ft_strlen(src);
	if (size < dest_t + 1)
		return (size + src_t);
	if (size >= dest_t + 1)
	{
		while (dest_t + cont < size - 1 && src[cont] != '\0')
		{
			dest[dest_t + cont] = src[cont];
			cont++;
		}
	}
	dest[dest_t + cont] = '\0';
	return (dest_t + src_t);
}
