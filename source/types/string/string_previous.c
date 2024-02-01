/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_previous.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:43:13 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/01 16:08:42 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_i8	string_previous(t_string string)
{
	if (string->cursor == string->content)
	{
		return (0);
	}
	else
	{
		string->cursor--;
		return (*(string->cursor));
	}
}
