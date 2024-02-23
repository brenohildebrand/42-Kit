/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   framework_get_gtable.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:13:16 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 14:13:55 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "framework.h"

t_table	framework_get_table(void)
{
	return (framework_get()->gtable);
}
