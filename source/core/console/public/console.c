/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   console.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 20:17:11 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 14:58:07 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Logs a message to stdout.
 *
 * @param message The message string to log.
 */
void console(t_i8 *message)
{
	t_u8 len;

	len = 0;
	while (message[len])
	{
		len++;
	}
	write(1, message, len);
}
