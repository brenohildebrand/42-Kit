/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:47:28 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/29 11:14:33 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

#ifdef DEBUG

void	debug(char *cstring)
{
	write(1, "\033[1;34m", 7);
	write(1, "[DEBUG] ", 8);
	write(1, "\033[0m", 4);
	display(cstring);
}

#else

void	debug(char *cstring)
{
	(void)cstring;
}

#endif