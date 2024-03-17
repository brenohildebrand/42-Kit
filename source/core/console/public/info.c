/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 00:37:31 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 13:00:41 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Prints an informational message to the standard output prefixed with "[INFO]".
 * The message is printed in green text.
 * 
 * @param message The message to print.
 */
void info(t_i8 *message)
{
	write(1, "\033[1;32m", 7);
	write(1, "[INFO] ", 8);
	write(1, "\033[0m", 4);
	log(message);
}
