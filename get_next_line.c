/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 20:11:59 by mjose-ye          #+#    #+#             */
/*   Updated: 2021/12/08 18:17:36 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*find_line(int fd, char **backup, char	*buffer);
static char	*word_processing(char **backup, int i);

char	*get_next_line(int fd)
{
	char		*line;
	static char	*backup[OPEN_MAX];
	char		*buffer;

	line = NULL;
	if (fd < 0 || fd > OPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
	{
		return (NULL);
	}
	if (!backup[fd])
		backup[fd] = ft_strdup("");
	line = find_line(fd, &backup[fd], buffer);
	free(buffer);
	return (line);
}

static char	*find_line(int fd, char **backup, char	*buffer)
{
	int		bytes_read;
	char	*temp;
	char	*ncheck;

	ncheck = ft_strchr(*backup, '\n');
	while (ncheck == NULL)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read <= 0)
		{
			return (word_processing(backup, 0));
		}
		buffer[bytes_read] = '\0';
		temp = ft_strjoin(*backup, buffer);
		free(*backup);
		*backup = temp;
		ncheck = ft_strchr(*backup, '\n');
	}
	return (word_processing(backup, ncheck - *backup + 1));
}

static char	*word_processing(char **backup, int i)
{
	char	*line;
	char	*temp;

	if (i == 0)
	{
		if (**backup == '\0')
		{
			free(*backup);
			*backup = NULL;
			return (NULL);
		}
		temp = *backup;
		*backup = NULL;
		return (temp);
	}
	line = ft_substr(*backup, 0, i);
	temp = ft_strdup(*backup + i);
	free(*backup);
	*backup = temp;
	return (line);
}
