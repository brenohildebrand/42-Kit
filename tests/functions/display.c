/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:42:33 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 21:01:50 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	int		stdout_backup;
	int		pipefd[2];
	char	buffer[100];

	stdout_backup = dup(1);
	pipe(pipefd);
	dup2(pipefd[1], 1);
	close(pipefd[1]);
	display("hello, world!");
	dup2(stdout_backup, 1);
	read(pipefd[0], buffer, sizeof(buffer));
	close(pipefd[0]);
	// compare "hello, world!" with buffer
	return (0);
}
