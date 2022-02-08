/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:32:55 by mjose-ye          #+#    #+#             */
/*   Updated: 2022/02/07 23:46:23 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	tstr;
	char	*dest;

	if (!s)
		return (NULL);
	tstr = ft_strlen(s);
	if (tstr <= len)
		len = tstr - start;
	if (start > tstr)
		return (ft_strdup(""));
	dest = ft_calloc(len + 1, sizeof(char));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s + start, len + 1);
	return (dest);
}
