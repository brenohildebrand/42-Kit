/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:46:02 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/01 16:37:37 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_i8	string_end(t_string string)
{
	string->cursor = string->content + (string->length - 1);
	return (*(string->cursor));
}
