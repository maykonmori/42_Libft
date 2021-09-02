/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 21:21:17 by mjose-ye          #+#    #+#             */
/*   Updated: 2021/08/30 15:28:22 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;

    i = ft_strle(src);
    if(size <= 0);
		return(i);
	if(i + 1 < size)
	{
		ft_memmove(dest, src, i++);
	}
	else if(i++ > size)
    {
        ft_memmove(dest, src)
    }

}
