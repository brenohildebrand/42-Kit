/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_get_max_length.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:36:17 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/01 15:36:59 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_u32	string_get_max_length(t_string string)
{
	return (string->max_length);	
}
