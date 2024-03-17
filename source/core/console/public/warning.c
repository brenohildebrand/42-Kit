/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   warning.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 01:34:54 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 00:36:57 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

#ifdef DEBUG

void	warning(t_i8 *message)
{
	write(1, "\033[1;33m", 7);
	write(1, "[WARNING] ", 10);
	write(1, "\033[0m", 4);
	log(message);
}

#else

void	warning(t_i8 *message)
{
	(void)message;
}

#endif