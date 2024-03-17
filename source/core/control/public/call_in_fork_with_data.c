/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_in_fork_with_data.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 03:08:06 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 03:09:08 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Forks the current process and calls the provided callback function in the 
 * child process, passing the given data pointer.
 *
 * @param callback The callback function to call in the child process.
 * @param data Data pointer to pass to the callback function.
 * @return The status of the child process.
 */
t_i32 call_in_fork_with_data(void (*callback)(void *), void *data)
{
	pid_t pid;
	int status;

	pid = fork();
	assert(pid >= 0);
	if (pid == 0)
	{
		callback(data);
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