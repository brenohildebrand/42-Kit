/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:10:35 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/24 23:23:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "framework.h"

t_any	create(t_typedata (*type)(void))
{
	t_typedata	typedata;
	t_any		any;

	typedata = type();
	any = typedata->create();
	return (any);
}
