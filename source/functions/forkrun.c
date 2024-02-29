/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forkrun.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:03:08 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/29 15:37:00 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	forkrun(void (*callback)(void))
{
	pid_t	pid;
	int		status;

	pid = fork();
	assert(pid >= 0);
	if (pid == 0)
	{
		callback();
	}
	else
	{
		waitpid(pid, &status, 0);
		if (WIFEXITED(status))
			return (WEXITSTATUS(status));
	}
	return (0);
}
