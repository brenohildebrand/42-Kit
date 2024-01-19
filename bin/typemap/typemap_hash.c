/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typemap_hash.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:59:08 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/17 13:18:14 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typemap.h"

unsigned int	typemap_hash(t_typecode key)
{
	return (key->value % TYPEMAP_MAX_ENTRIES);
}
