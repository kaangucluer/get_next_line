/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgucluer <kgucluer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 00:11:51 by kgucluer          #+#    #+#             */
/*   Updated: 2023/07/27 15:39:15 by kgucluer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>

char	*read_total_line(int fd, char *line)
{
	char	data[BUFFER_SIZE + 1];
	int		i;

	i = 1;
	while (!ft_strchr(line, '\n') && i != 0)
	{
		i = read(fd, data, BUFFER_SIZE);
		if (i == -1)
		{
			free(line);
			return (NULL);
		}
		data[i] = '\0';
		line = ft_strjoin(line, data);
	}
	return (line);
}

char	*read_newline(char *line)
{
	int		i;
	char	*data;

	i = 0;
	if (!line[i])
		return (0);
	while (line[i] && line[i] != '\n')
		i++;
	data = (char *)malloc(sizeof(char) * (i + 1 + (line[i] == '\n')));
	if (!data)
		return (0);
	i = 0;
	while (line[i] && line[i] != '\n')
	{
		data[i] = line[i];
		i++;
	}
	if (line[i] == '\n')
	{
		data[i] = line[i];
		i++;
	}
	data[i] = '\0';
	return (data);
}

char	*before_line_delete(char *line)
{
	int		i;
	int		j;
	char	*data;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	if (!line[i])
	{
		free(line);
		return (NULL);
	}
	data = malloc(sizeof(char) * (ft_strlen(line) - i));
	if (!data)
	{
		free(line);
		return (NULL);
	}
	i++;
	j = 0;
	while (line[i])
		data[j++] = line[i++];
	data[j] = '\0';
	free(line);
	return (data);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	static char	*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	line = read_total_line(fd, line);
	if (!line)
		return (NULL);
	buffer = read_newline(line);
	line = before_line_delete(line);
	return (buffer);
}
