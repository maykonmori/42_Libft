/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:29:25 by mjose-ye          #+#    #+#             */
/*   Updated: 2021/09/02 18:36:01 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = ft_strlen(src);
	if (i + 1 < size)
		ft_memmove(dest, src, i + 1);
	else if (size != 0)
	{
		ft_memmove(dest, src, size - 1);
		dest[size - 1] = '\0';
	}
	return (i);
}
