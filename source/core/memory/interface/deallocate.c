/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deallocate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:52:44 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/14 22:46:34 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory_management.h"

void	deallocate(void *pointer)
{
	memtree_delete(pointer);
}
