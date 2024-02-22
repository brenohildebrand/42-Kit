/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 01:50:24 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 01:53:22 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	*create(t_type (*signature)(void))
{
	t_type	type;
	void	*instance;

	type = signature();
	instance = new(type);
	return (instance);
}
