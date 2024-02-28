/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:00:49 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 13:02:31 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "string.h"

// t_string	string_init(t_string instance, t_any value)
// {
// 	int		i;
// 	int		len;
// 	char	*cstring;

// 	len = 0;
// 	cstring = value->value.cstring;
// 	while (cstring[len])
// 	{
// 		len++;
// 	}
// 	if (instance->max_length < len)
// 	{
// 		string_expand(instance, len);
// 	}
// 	i = 0;
// 	while (i < len)
// 	{
// 		instance->content[i] = cstring[i];
// 		i++;
// 	}
// 	return (instance);
// }
