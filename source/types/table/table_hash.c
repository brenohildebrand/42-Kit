/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table_hash.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:04:56 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 23:47:47 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "table.h"

// -- According to ChatGPT this algorithm is called 'djb2'.
int	table_hash(t_any key)
{
	unsigned char	*buffer;
	int				i;
	int				hash;

	hash = 5381;
	buffer = (unsigned char *)&key;
	i = 0;
	while (i < (int)sizeof(t_any))
	{
		hash = ((hash << 5) + hash) + buffer[i];
	}
	return (hash);
}
