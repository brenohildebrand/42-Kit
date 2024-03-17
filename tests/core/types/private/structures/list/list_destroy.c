/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_destroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 16:04:01 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/13 17:22:27 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_i32	main(void)
{
	t_list	instance;

	instance = create(list);
	destroy(instance);

	instance = create(list);
	for (t_i32 i = 0; i < 100; i++)
		push(instance, i32_to_any(i));
	destroy(instance);
	
	list_destroy(NULL);
	return (0);
}
