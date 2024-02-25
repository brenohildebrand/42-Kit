/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cint.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 02:32:09 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/24 21:26:45 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	t_any	instance;

	instance = cint_to_any(42);
	assert(any_as_cint(instance) == 42);
	destroy(instance);
	return (0);
}
