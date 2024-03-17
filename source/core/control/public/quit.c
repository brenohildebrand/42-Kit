/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:20:57 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 02:54:09 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memtree.h"

/**
 * Quit the program with the given exit code. This destroys the memory tree, 
 * then calls the exit() system call.
 * 
 * @param code The exit code to give to the system.
 */
void quit(t_i32 code)
{
	memtree_destroy();
	exit(code);
}
