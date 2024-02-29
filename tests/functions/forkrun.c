/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forkrun.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:32:32 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/29 15:39:05 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	exitzero(void)
{
	exit(0);
}

void	exitone(void)
{
	exit(1);
}

void	exitfortytwo(void)
{
	exit(42);
}

int	main(void)
{
	assert(forkrun(exitzero) == 0);
	assert(forkrun(exitone) == 1);
	assert(forkrun(exitfortytwo) == 42);
	return (0);
}
