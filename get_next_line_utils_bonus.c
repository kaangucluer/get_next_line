/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgucluer <kgucluer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:47:14 by kgucluer          #+#    #+#             */
/*   Updated: 2023/07/27 15:03:34 by kgucluer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *str, int k)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (!k)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == k)
			return ((char *)str + i);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *line, char *data)
{
	unsigned int	i;
	unsigned int	j;
	char			*s3;

	if (!data)
		return (NULL);
	if (!line)
	{
		line = malloc(1);
		if (!line)
			return (NULL);
		line[0] = '\0';
	}
	s3 = malloc(sizeof(char) * (ft_strlen(line) + ft_strlen(data) + 1));
	if (!s3)
		return (free(line), NULL);
	i = -1;
	while (line[++i] != '\0')
		s3[i] = line[i];
	j = -1;
	while (data[++j] != '\0')
		s3[i + j] = data[j];
	return (s3[i + j] = '\0', free(line), s3);
}
