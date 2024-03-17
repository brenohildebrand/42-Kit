/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:47:28 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 14:59:08 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef DEBUG

/**
 * Writes a debug message to standard output prefixed with "[DEBUG]".
 * The message is written in blue text. Only works in debug mode.
 *
 * @param message The debug message to write.
 */
void debug(t_i8 *message)
{
	write(1, "\033[1;34m", 7);
	write(1, "[DEBUG] ", 8);
	write(1, "\033[0m", 4);
	console(message);
}

#else

/**
 * Writes a debug message to standard output prefixed with "[DEBUG]".
 * The message is written in blue text. Only works in debug mode.
 *
 * @param message The debug message to write.
 */
void	debug(t_i8 *message)
{
	(void)message;
}

#endif