/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 16:36:59 by mjose-ye          #+#    #+#             */
/*   Updated: 2021/08/30 21:39:52 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	int	aux;
	char	*dest;
	char	*c;

	aux = strlen(s) + 1;
	c = malloc(aux * sizeof(char));
	if (!c)
		return (0);
	if (aux < (int) c)
	{
		dest[aux] = s[aux];
		aux++;
	}
	return ((char *)dest);
}

// A função strdup () aloca memória suficiente para uma cópia da string s1, faz a cópia e retorna um ponteiro para isso. O ponteiro pode ser subsequentemente usado como um argumento para a função free (3).

// Se houver memória insuficiente disponível, NULL é retornado e errno é definido como ENOMEM.

// A função strndup () copia no máximo n caracteres da string s1 sempre NULL terminando a string copiada.
