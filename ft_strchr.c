/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 10:28:19 by mjose-ye          #+#    #+#             */
/*   Updated: 2021/09/09 11:37:41 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	*s;
	unsigned char	t;

	t = (unsigned char) c;
	s = (unsigned char *)str;
	while (*s != t && *s != '\0')
	{
		s++;
	}
	if (*s == t)
	{
		return ((char *)s);
	}
	return (0);
}
