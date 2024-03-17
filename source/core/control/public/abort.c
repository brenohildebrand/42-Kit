/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:20:57 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 00:59:30 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memtree.h"

/**
 * Abort the program execution by calling memtree_destroy() to free allocated
 * memory and exit() to terminate the process.
 *
 * @param code The exit code to use when terminating the process.
 */
void abort(t_i32 code)
{
	memtree_destroy();
	exit(code);
}
