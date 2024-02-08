/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_destroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:26:44 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/08 17:22:14 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

void	file_destroy(t_file file)
{
	string_destroy(file->path);
	string_destroy(file->content);
	delete(file);
}
