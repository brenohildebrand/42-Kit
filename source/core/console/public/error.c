/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:22:16 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 14:59:02 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Prints an error message to stderr and logs it, then quits the program
 * with exit code 1.
 *
 * @param message The error message to print and log.
 */
void error(t_i8 *message)
{
	write(1, "\033[1;31m", 7);
	write(1, "[ERROR] ", 8);
	write(1, "\033[0m", 4);
	console(message);
	quit(1);
}
