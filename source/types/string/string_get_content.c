/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_get_content.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:34:47 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/01 16:09:51 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_i8	*string_get_content(t_string string)
{
	return (string->content);
}
