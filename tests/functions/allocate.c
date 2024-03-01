/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 10:52:45 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/01 17:01:55 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	void	*buffer;

	buffer = allocate(42);
	assert(buffer != NULL);
	deallocate(buffer);
	return (0);
}
