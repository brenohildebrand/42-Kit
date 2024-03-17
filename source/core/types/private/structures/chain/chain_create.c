/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:13:11 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/14 19:15:28 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

t_chain	chain_create(void)
{
	t_chain	instance;

	instance = (t_chain)new(chain);
	instance->head = NULL;
	instance->tail = NULL;
	instance->size = 0;
	instance->length = 0;
	return (instance);
}
