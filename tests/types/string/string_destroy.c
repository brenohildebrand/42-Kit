/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:42:56 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/01 16:57:54 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

int	main(void)
{
	t_string	string;

	string = string_build("hello string!");
	string_destroy(string);
	return (0);
}
