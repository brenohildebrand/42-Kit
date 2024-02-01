/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_next.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:41:53 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/01 16:28:20 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_i8	string_next(t_string string)
{
	if (string->cursor == string->content + (string->length - 1))
	{
		return (0);
	}
	else
	{
		string->cursor++;
		return (*(string->cursor));
	}
}
