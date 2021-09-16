/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 20:57:12 by mjose-ye          #+#    #+#             */
/*   Updated: 2021/09/11 13:21:26 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	cont1;
	size_t	cont2;
	size_t	ts1;
	size_t	ts2;
	char	*dest;

	cont1 = 0;
	cont2 = 0;
	if (!s1 || !s2)
		return (NULL);
	ts1 = ft_strlen(s1);
	ts2 = ft_strlen(s2);
	dest = ft_calloc((ts1 + ts2 + 1), sizeof(char));
	if (dest == 0)
		return (NULL);
	while (s1[cont1++] != '\0')
		dest[cont1 - 1] = s1[cont1 - 1];
	while (s2[cont2++] != '\0')
		dest[(cont1 - 1) + (cont2 - 1)] = s2[cont2 - 1];
	return (dest);
}
