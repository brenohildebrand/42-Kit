/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_start.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:40:50 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/01 16:09:04 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_i8	string_start(t_string string)
{
	string->cursor = string->content;
	return (*(string->cursor));
}
