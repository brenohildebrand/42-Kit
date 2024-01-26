/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 22:44:29 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/25 17:59:47 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include "framework.h"

typedef struct s_stack	*t_stack;

struct s_stack {
	t_any			*content;
	unsigned int	length;
	unsigned int	max_length;
};

t_typedata	stack(void);
t_stack		stack_create(void);
void		stack_init(t_stack stack);
t_stack		stack_build(void);
void		stack_destroy(t_stack stack);
void		stack_push(t_stack stack, t_any value);
t_any		stack_pop(t_stack stack);
void		stack_rotate(t_stack stack);
void		stack_reverse_rotate(t_stack stack);
void		stack_peek(t_stack stack);

#endif