/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   warning.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 01:34:54 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 14:22:42 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

#ifdef DEBUG

/**
 * Prints a warning message to standard output. The message is printed with 
 * yellow color and prefixed with "[WARNING]". Omitted if not in debug mode.
 * 
 * @param message The warning message to print and log.
 */
void warning(t_i8 *message)
{
	write(1, "\033[1;33m", 7);
	write(1, "[WARNING] ", 10);
	write(1, "\033[0m", 4);
	log(message);
}

#else

/**
 * Prints a warning message to standard output. The message is printed with 
 * yellow color and prefixed with "[WARNING]". Omitted if not in debug mode.
 * 
 * @param message The warning message to print and log.
 */
void	warning(t_i8 *message)
{
	(void)message;
}

#endif