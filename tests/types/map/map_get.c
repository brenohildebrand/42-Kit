/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:31:29 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/12 17:36:46 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_i32	main(void)
{
	t_map	instance;

	instance = create(map);
	set(instance, i32_to_any(32), i32_to_any(64));
	destroy(instance);
	return (0);
}
