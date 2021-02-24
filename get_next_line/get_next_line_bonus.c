/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 01:22:44 by atemfack          #+#    #+#             */
/*   Updated: 2021/01/11 03:32:02 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static int		gnl_free(int n, char *ptr, char **as)
{
	if (ptr)
		free(ptr);
	if (!as)
		return (n);
	ptr = *as;
	free(ptr);
	*as = NULL;
	return (n);
}

static int		gnl_extract_line(int fd, char *buffer, char **line, char *reste)
{
	int			n;
	char		*s;

	*line = gnl_strjoin(reste, NULL);
	if (*line == NULL)
		return (-1);
	if (gnl_strchr_endl(*line))
		return (1);
	buffer[0] = '\0';
	while (gnl_strchr_endl(buffer) == NULL)
	{
		n = read(fd, buffer, BUFFER_SIZE);
		if (n == -1)
			return (gnl_free(-1, NULL, line));
		buffer[n] = '\0';
		if (!n)
			break ;
		s = gnl_strjoin(*line, buffer);
		if (s == NULL)
			return (gnl_free(-1, NULL, line));
		free(*line);
		*line = s;
	}
	return (n);
}

static int		gnl_clean_line(char **line, char **reste)
{
	int			n;
	char		*s;
	char		*tmp;

	s = gnl_strchr_endl(*line);
	if (s == NULL)
		return (1);
	if (*(s + 1))
	{
		*reste = gnl_strjoin(s + 1, NULL);
		if (*reste == NULL)
			return (-1);
	}
	n = s - *line;
	s = (char *)malloc(sizeof(*s) * (n + 1));
	if (s == NULL)
		return (gnl_free(-1, NULL, reste));
	s[n] = '\0';
	tmp = *line;
	*line = gnl_strncpy(s, *line, n);
	free(tmp);
	return (1);
}

int				get_next_line(int fd, char **line)
{
	int			n;
	char		*buffer;
	static char	*reste[FD_SIZE];

	if (fd < 0 || fd > FD_SIZE || BUFFER_SIZE < 1 || !(line))
		return (-1);
	if (!(reste[fd]))
	{
		reste[fd] = (char *)malloc(sizeof(char));
		if (reste[fd] == NULL)
			return (-1);
		*reste[fd] = '\0';
	}
	buffer = (char *)malloc(sizeof(*buffer) * (BUFFER_SIZE + 1));
	if (buffer == NULL)
		return (gnl_free(-1, NULL, &reste[fd]));
	buffer[BUFFER_SIZE] = '\0';
	n = gnl_extract_line(fd, buffer, line, reste[fd]);
	if (gnl_free(n, buffer, &reste[fd]) < 1)
		return (n);
	n = gnl_clean_line(line, &reste[fd]);
	if (n == -1)
		return (gnl_free(n, NULL, line));
	return (n);
}
