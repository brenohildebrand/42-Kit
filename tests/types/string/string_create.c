/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:53:57 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/01 15:59:46 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

int	main(void)
{
	t_string	string;

	string = string_create();
	if (string->content != 0)
		return (1);
	if (string->length != 0)
		return (1);
	if (string->max_length != 0)
		return (1);
	if (string->cursor != 0)
		return (1);
	string_destroy(string);
	return (0);
}
