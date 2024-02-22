/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 04:50:03 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 01:44:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	print(char *cstring)
{
	unsigned int	len;

	len = 0;
	while (cstring[len])
		len++;
	write(1, cstring, len);
	write(1, "\n", 1);
}
