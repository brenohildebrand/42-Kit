/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 10:58:25 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/29 15:37:59 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	trueassert(void)
{
	assert(1 + 1 == 2);
}

void	falseassert(void)
{
	assert(1 + 1 == 3);
}

int	main(void)
{
	assert(forkrun(trueassert) == 0);
	assert(forkrun(falseassert) == 1);
	return (0);
}
