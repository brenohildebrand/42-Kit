/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:32:23 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/18 18:49:15 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typetree.h"
#include <stdio.h>

#define SIZE 10

int	main(void)
{
	for (long long int i = 1; i <= 100; i++)
	{
		typetree_insert((void *)i);
	}
	for (long long int i = 1; i <= 100; i++)
	{
		typetree_delete((void *)i);
	}
	return (0);
}