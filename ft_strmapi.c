/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 18:24:07 by mjose-ye          #+#    #+#             */
/*   Updated: 2021/09/10 23:04:56 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	cont;
	size_t	slen;
	char	*nstr;

	if (!s)
		return (NULL);
	cont = 0;
	slen = ft_strlen(s);
	nstr = (char *)ft_calloc((slen + 1), sizeof(char));
	if (nstr == 0)
		return (NULL);
	while (s[cont])
	{
		nstr[cont] = f(cont, s[cont]);
		cont++;
	}
	return (nstr);
}
