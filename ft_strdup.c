/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 16:36:59 by mjose-ye          #+#    #+#             */
/*   Updated: 2021/09/10 16:49:57 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		aux;
	char	*dest;

	aux = ft_strlen(s) + 1;
	dest = ft_calloc(aux, sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (aux > 0)
	{
		aux--;
		dest[aux] = s[aux];
	}
	return (dest);
}
