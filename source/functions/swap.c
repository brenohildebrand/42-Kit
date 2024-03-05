/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 07:58:17 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/05 08:06:33 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(void *instance)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL);
	assert(type->swap != NULL);
	type->swap(instance);
}
