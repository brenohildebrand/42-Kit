/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deallocate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 10:55:13 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/25 10:55:23 by bhildebr         ###   ########.fr       */
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
