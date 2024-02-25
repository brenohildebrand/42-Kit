/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 10:58:25 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/25 11:30:21 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	trueassert(void)
{
	assert(1 + 1 == 2);
	return (0);
}

int	falseassert(void)
{
	assert(1 + 1 == 3);
	return (0);
}

int	main(void)
{
	assert(forkrun(trueassert) == 0);
	assert(forkrun(falseassert) == 1);
	return (0);
}
