/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 12:18:53 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/03 13:09:38 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	t_list	instance;

	instance = create(list);
	destroy(instance);
	instance = create(list);
	push(instance, i32_to_any(42));
	destroy(instance);
	return (0);
}
