/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:53:40 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/24 16:06:45 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typekit.h"

int	main(void)
{
	t_any	addresses[10000];
	
	for (int i = 0; i < 100; i++)
		addresses[i] = allocate(i);
	for (int i = 0; i < 100; i++)
		deallocate(addresses[i]);
	for (int i = 0; i < 100; i++)
		addresses[i] = allocate(i);
	for (int i = 99; i >= 0; i--)
		deallocate(addresses[i]);
	return (0);
}