/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 08:54:12 by mjose-ye          #+#    #+#             */
/*   Updated: 2021/09/11 13:38:55 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_quantity(char const *str, char del);
static void		complement_split(char const *s, char c, char **arr);

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = ft_calloc(str_quantity(s, c) + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	complement_split(s, c, arr);
	return (arr);
}

static void	complement_split(char const *s, char c, char **arr)
{
	size_t	cont;
	size_t	cchr;
	size_t	carr;

	cont = 0;
	carr = -1;
	while (s[cont] != '\0')
	{
		if (s[cont] == c)
			cont++;
		else
		{
			cchr = 0;
			while (s[cont] != c && s[cont] != '\0')
			{
				cont++;
				cchr++;
			}
			arr[++carr] = ft_calloc(cchr + 1, sizeof(char));
			ft_strlcpy(arr[carr], &s[cont - cchr], cchr + 1);
		}
	}
}

static size_t	str_quantity(char const *str, char del)
{
	size_t	qstr;
	size_t	cont;

	qstr = 0;
	cont = 0;
	while (str[cont] != '\0')
	{
		if (del == str[cont])
		{
			cont++;
		}
		else
		{
			while (str[cont] != del && str[cont] != '\0')
			{
				cont++;
			}
			qstr++;
		}
	}
	return (qstr);
}
