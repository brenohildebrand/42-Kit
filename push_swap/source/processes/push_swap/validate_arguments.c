/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_arguments.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 03:13:34 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/23 04:49:26 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	validate_arguments(int argc, char *argv)
{
	unsigned int	i;
	unsigned int	j;

	if (argc == 0)
	{
		write("Usage: ./push_swap <list of numbers>\n", 38);
		exit(1);
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while(argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				write("The numbers should only contain digits.\n", 41);
				exit(1);
			}
			j++;
		}
		i++;
	}
}
