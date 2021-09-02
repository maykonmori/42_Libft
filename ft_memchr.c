/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 11:02:00 by mjose-ye          #+#    #+#             */
/*   Updated: 2021/08/30 18:58:17 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*v;
	unsigned char	t;

	t = (unsigned char)c;
	v = (unsigned char *)s;
	while (n--)
	{
		if (*v == t)
		{
			return (v);
		}
		v++;
	}
	return (0);
}
