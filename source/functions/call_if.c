/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_if.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:34:11 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/04 14:34:40 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	call_if(int condition, void (*callback)(void))
{
	if (condition)
	{
		callback();
	}
}
