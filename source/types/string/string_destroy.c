/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:59:59 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 17:54:58 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	string_destroy(t_string instance)
{
	deallocate(instance->content);
	delete(instance);
}
