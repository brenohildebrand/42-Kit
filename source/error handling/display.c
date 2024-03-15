/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 20:17:11 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 20:47:52 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	display(char *cstring)
{
	unsigned int	len;

	len = 0;
	while (cstring[len])
		len++;
	write(1, cstring, len);
}