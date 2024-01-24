/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:11:48 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/24 11:06:14 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typekit.h"

void	destroy(t_any address)
{
	t_typedata	typedata;

	typedata = typetree_search(address);
	if (typedata == NULL)
		typetree_delete(address);
	else
		typedata->destroy(address);
}
