/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:18:33 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/18 19:22:43 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H

typedef struct s_file	*t_file;

struct s_file {
	t_vector	content;
	void		*cursor;
};

t_file	file_create(char *path);
void	file_destroy(void);

void	file_convert_to_map(t_file file);

file_

#endif