/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:57:01 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/07 20:54:08 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANY_H
# define ANY_H

typedef void	*t_any;

t_type	ft_any(void);

t_any	any_create(unsigned int size);
void	any_destroy(t_any instance);

// t_any		any_copy(t_any instance);
// TODO

#endif