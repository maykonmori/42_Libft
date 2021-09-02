/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 14:58:29 by mjose-ye          #+#    #+#             */
/*   Updated: 2021/08/30 18:59:22 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t				i;
	const unsigned char	*t;
	const unsigned char	*r;

	i = 0;
	t = str1;
	r = str2;
	while (i < n)
	{
		if (t[i] != r[i])
		{
			return (t[i] - r[i]);
		}
		i++;
	}
	return (0);
}
