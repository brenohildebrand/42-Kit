/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typemap_insert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:08:46 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/17 13:23:45 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typemap.h"
#include <stdio.h>

void	foo(t_any address)
{
	(void)address;
	return ;	
}

int	main(void)
{
	struct s_typecode	typecode;
	struct s_typedata	typedata;

	typecode = (struct s_typecode){ .value = 928 };
	typedata = (struct s_typedata){ .destroy = foo };
	typemap_insert(&typecode, &typedata);
	if (&typedata == typemap_find(&typecode))
		printf("Working!\n");
	return (0);
}
