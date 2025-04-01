/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:45:53 by psoulie           #+#    #+#             */
/*   Updated: 2024/10/28 15:53:45 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* char	*get_next_line(int fd)
{
	char			*buffer;
	static char		*stash;
	static char		*line;
	int				bytes_read;
	static int		i;
	int 			j = 0;
	int				endl = 0;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	line = ft_calloc(1, sizeof(char *));
	while (!endl)
	{

		buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
		if (!buffer)
			return (NULL);
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		stash = ft_strjoin(stash, buffer);
		while (buffer[j])
		{
			stash[i] = buffer[j];
			if (stash[i] == '\n')
			{
				i = 0;
				line = ft_calloc((j + 1), sizeof(char));
				if (!line)
					return (NULL);
				while (i <= j)
				{
					line[i] = stash[i];
					i++;
				}
				stash[j] = 0;
				free(stash);
				i = -1;
				endl = 1;
			}
			i++;
			j++;
		}
		free(buffer);
	}
	return (line);
} */

static char	*keep_rest(char *stash, int start)
{
	char	*rest;
	int		len;

	len = ft_strlen(stash) - start;
	if (len <= 0)
	{
		free(stash);
		return (NULL);
	}
	rest = ft_substr(stash, start, len);
	free(stash);
	return (rest);
}

static char	*get_line(char *stash, int *pointer)
{
	char	*line;
	int		i;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] == '\n')
		*pointer = i + 1;
	else
	{
		*pointer = i;
		if (i == 0 && stash[i] == '\0')
			return (NULL);
	}
	line = ft_substr(stash, 0, *pointer);
	return (line);
}

static char	*get_buffer(int fd, char *buffer, char *stash)
{
	int		bytes_read;
	char	*new_stash;

	while (!ft_strchr(stash, '\n'))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == 0 && stash[0] == '\0')
		{
			free(stash);
			return (NULL);
		}
		if (bytes_read <= 0)
			return (stash);
		buffer[bytes_read] = '\0';
		new_stash = ft_strjoin(stash, buffer);
		free(stash);
		stash = new_stash;
	}
	return (stash);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	char		*line;
	static char	*stash;
	int			pointer;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	if (stash == NULL)
		stash = ft_strdup("");
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	stash = get_buffer(fd, buffer, stash);
	free(buffer);
	if (!stash)
		return (NULL);
	line = get_line(stash, &pointer);
	if (!line && !stash)
		return (NULL);
	stash = keep_rest(stash, pointer);
	return (line);
}
