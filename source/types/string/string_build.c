/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_build.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:57:43 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/22 22:34:15 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_string	string_build(char *value)
{
	t_string	s;

	s = string_create();
	string_init(s, value);
	return (s);
}
