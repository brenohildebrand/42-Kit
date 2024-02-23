/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   framework_get_memtree.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:10:41 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 14:13:06 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "framework.h"

t_memtree	framework_get_memtree(void)
{
	return (framework_get()->memtree);
}
