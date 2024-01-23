/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_stack_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 03:13:51 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/23 04:55:06 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initialize_stack_a(t_stack a, char *argv[])
{
	unsigned int	i;

	i = 1;
	while (argv[i])
		i++;
	while (i > 0)
	{
		stack_push(a, ft_atoi(argv[i]));
		i--;
	}
}