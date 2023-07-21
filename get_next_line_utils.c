/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgucluer <kgucluer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 00:11:54 by kgucluer          #+#    #+#             */
/*   Updated: 2023/07/21 00:11:54 by kgucluer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlen(const char *str)
{
    int i;

    i = 0;
    if(!str)
        return (0);
    while(str[i])
        i++;
    return (i);
}

char *ft_strchr(const char *str,int k)
{
    int len;

    len = ft_strlen(str);
    if(!str)
        return (0);
    while(len >= 0)
    {
        if(*str == (char)k)
            return ((char *)str);
        str++;
        len--;
    }
    return (0);
}

char *ft_strjoin(char *line, char *data)
{
    unsigned int i;
    unsigned int j;
    char *s3;

    if(!line)
    {
        line = (char*)malloc(sizeof(char) * 1);
        line[0] = '\0';
    }
    if(!line || !data)
        return (0);
    i = -1;
    s3 = malloc(sizeof(char) * (ft_strlen(line) + ft_strlen(data)) + 1);
    if(line[++i] != 0)
        s3[i] == line[i];
    j = -1;
    if(data[++j] != 0)
        s3[j + i] = data[j];
    s3[j + i] = 0;
    free(line);
    return (s3);
}