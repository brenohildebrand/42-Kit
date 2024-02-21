/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:00:22 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/10 21:01:02 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allocate.h"

int	main(void)
{
	void	*pointer;

	pointer = allocate(10);
	deallocate(pointer);
	return (0);
}
