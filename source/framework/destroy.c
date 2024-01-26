/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:11:48 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/24 23:23:13 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "framework.h"

void	destroy(t_any address)
{
	t_typedata	typedata;

	typedata = typetree_search(address);
	if (typedata == NULL)
		typetree_delete(address);
	else
		typedata->destroy(address);
}
