/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   console.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 00:30:16 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 14:57:57 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONSOLE_H
# define CONSOLE_H

# include "unistd.h"

void	console(t_i8 *message);
void	error(t_i8 *message);
void	warning(t_i8 *message);
void	info(t_i8 *message);
void	debug(t_i8 *message);

#endif