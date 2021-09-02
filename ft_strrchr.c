/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 01:44:33 by mjose-ye          #+#    #+#             */
/*   Updated: 2021/08/31 11:46:31 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = (int) ft_strlen(str);
	while (i > -1)
	{
		if (str[i] == c)
		{
			return ((char *)str + i);
		}
		i--;
	}
	return (0);
}
