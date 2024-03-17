/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_in_fork.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:03:08 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 03:07:37 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Runs the given callback function in a new child process.
 *
 * Forks a new child process, runs the given callback function in the
 * child process, then waits for the child to exit and returns its exit code.
 * This allows running some code in a separate process without having to
 * manually fork and handle all the process management.
 * 
 * @param callback The callback function to run in a new child process.
 * @return The exit code of the child process.
 */
t_i32 call_in_fork(void (*callback)(void))
{
	pid_t pid;
	int status;

	pid = fork();
	assert(pid >= 0);
	if (pid == 0)
	{
		callback();
		exit(0);
	}
	else
	{
		waitpid(pid, &status, 0);
		if (WIFEXITED(status))
			return (WEXITSTATUS(status));
	}
	return (0);
}
