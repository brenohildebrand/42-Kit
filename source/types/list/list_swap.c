/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:19:21 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/04 18:33:56 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	list_swap(t_list instance)
{
	t_any	last;
	t_any	penultimate;

	if (instance->length < 2)
		return ;
	last = list_pop(instance);
	penultimate = list_pop(instance);
	list_push(instance, last);
	list_push(instance, penultimate);
}
