/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgucluer <kgucluer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:47:10 by kgucluer          #+#    #+#             */
/*   Updated: 2023/07/27 15:03:27 by kgucluer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

# include <stdlib.h>

char	*get_next_line(int fd);
char	*read_total_line(int fd, char *line);
char	*read_newline(char *line);
char	*before_line_delete(char *line);

size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int k);
char	*ft_strjoin(char *line, char *data);

#endif
