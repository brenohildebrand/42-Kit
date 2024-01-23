/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:44:58 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/22 20:46:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_string	string_create(void)
{
	t_string	s;

	s = (t_string)new(string);
	s->content = NULL;
	s->length = 0;
	s->max_length = 0;
	return (s);
}
