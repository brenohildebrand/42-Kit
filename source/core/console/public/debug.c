/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:47:28 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 00:35:21 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef DEBUG

void	debug(t_i8 *message)
{
	write(1, "\033[1;34m", 7);
	write(1, "[DEBUG] ", 8);
	write(1, "\033[0m", 4);
	log(message);
}

#else

void	debug(t_i8 *message)
{
	(void)message;
}

#endif