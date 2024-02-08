/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:12:13 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/08 17:21:54 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H

typedef struct s_file	*t_file;

#include "string.h"
#include <fcntl.h>

struct s_file {
	t_string	path;
	t_string	content;
};

t_file	file_create(char *path);
void	file_destroy(t_file file);

#endif