/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forkrun.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:32:32 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/25 11:41:36 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	exitzero(void)
{
	exit(0);
	return (0);	
}

int	exitone(void)
{
	exit(1);
	return (0);
}

int exitfortytwo(void)
{
	exit(42);
	return (0);
}

int	main(void)
{
	assert(forkrun(exitzero) == 0);
	assert(forkrun(exitone) == 1);
	assert(forkrun(exitfortytwo) == 42);
	return (0);
}
