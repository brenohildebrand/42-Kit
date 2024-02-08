/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_get_height.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:33:34 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/07 21:17:24 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trillian.h"

int	trillian_get_height(t_trillian trillian)
{
	if (trillian == NULL)
	{
		return (0);
	}
	else
	{
		return (trillian->height);
	}
}
