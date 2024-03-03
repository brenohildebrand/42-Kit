/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   share.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 13:16:12 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/03 13:48:35 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	create_and_share_stacks(void)
{
	t_list	alpha;
	t_list	beta;
	
	alpha = create(list);
	beta = create(list);
	share("alpha", as_any(alpha));
	share("beta", as_any(beta));
}

int	main(void)
{
	framework_setup();
	create_and_share_stacks();
	assert(retrieve("alpha")->type == list());
	assert(retrieve("beta")->type == list());
	framework_teardown();
	return (0);
}
