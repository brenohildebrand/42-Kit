/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_get.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:51:15 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/13 15:27:21 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	string_get(t_string string, int index)
{
	return (character_get((t_character)vector_get(string->content, index)));
}
