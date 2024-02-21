/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trillian_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:22:33 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/13 15:21:48 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trillian.h"

#define N 256

int	main(void)
{
	void	*address[N];

	for (int i = 0; i < N; i++)
		address[i] = malloc(16);
	for (int i = 0; i < N; i++)
		trillian_insert()
	return (0);
}
