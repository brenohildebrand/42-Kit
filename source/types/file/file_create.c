/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_create.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:26:16 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/08 17:20:24 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

static char	*realloc(char *buffer, unsigned int new_buffer_size)
{
	char			*new_buffer;
	unsigned int	i;

	new_buffer = malloc(new_buffer_size * sizeof(char));
	if (new_buffer == NULL)
		error("Couldn't allocate memory.");
	i = 0;
	while (i < (new_buffer_size / 2))
	{
		new_buffer[i] = buffer[i];
		i++;
	}
	free(buffer);
	return (new_buffer);
}

static char	*read_file(int fd)
{
	char			*buffer;
	unsigned int	bytes_read;
	unsigned int	buffer_size;
	
	buffer_size = 16;
	buffer = malloc(buffer_size * sizeof(char));
	if (buffer == NULL)
		error("Couldn't allocate memory.");
	bytes_read = read(fd, buffer, buffer_size);
	while (bytes_read)
	{
		if (bytes_read == -1)
			error("Couldn't read file.");
		buffer_size = buffer_size * 2;
		buffer = realloc(buffer, buffer_size);
	}
	return (buffer);
}

static t_string	file_to_string(char *path)
{
	int				fd;
	t_string		string;
	char			*buffer;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		error("Couldn't open file.");
	buffer = read_file(fd);
	string = string_create(buffer);
	free(buffer);
	if (close(fd) == -1)
		error("Couldn't close file.");
	return (string);
}

t_file	file_create(char *path)
{
	static struct s_type	type = {
		.destroy = (void (*)(t_any))file_destroy,
		.size = sizeof(struct s_file)
	};
	t_file					file;
	
	file = (t_file)new(&type);
	file->path = string_create(path);
	file->content = file_to_string(path);
	return (file); 
}
