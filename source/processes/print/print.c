/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 04:50:03 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/31 16:48:38 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "framework.h"

void	print(char *cstring)
{
	unsigned int	len;

	len = 0;
	while (cstring[len])
		len++;
	write(1, cstring, len);
	write(1, "\n", 1);
}
