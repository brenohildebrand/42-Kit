/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 07:58:17 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/14 00:09:48 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(void *instance, t_any key, t_any another_key)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL);
	assert(type->swap != NULL);
	type->swap(instance, key, another_key);
}
