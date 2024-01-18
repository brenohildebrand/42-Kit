/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_get_height.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:33:34 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/18 15:46:48 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typetree.h"

int	typetree_get_height(t_typetree typetree)
{
	if (typetree == NULL)
	{
		return (0);
	}
	else
	{
		return (typetree->height);
	}
}