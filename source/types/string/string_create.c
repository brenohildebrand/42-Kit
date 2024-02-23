/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:44:58 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 17:51:59 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_string	string_create(void)
{
	t_string	instance;

	instance = new(string);
	instance->max_length = 16;
	instance->content = allocate(instance->max_length * sizeof(char));
	instance->length = 0;
	return (string);
}
