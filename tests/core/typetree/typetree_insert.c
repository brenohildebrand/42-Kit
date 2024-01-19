/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:32:23 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/18 23:06:42 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typetree.h"
#include "typemap.h"
#include <stdio.h>

typedef struct s_integer	*t_integer;

struct s_integer {
	int	value;
};

void	integer_destroy(t_integer integer);

t_typecode	integer_typecode(void)
{
	static struct s_typecode typecode = {
		.value = 239
	};

	return (&typecode);
}

t_typedata	integer_typedata(void)
{
	static struct s_typedata typedata = {
		.destroy = (void (*)(t_any))integer_destroy
	};

	return (&typedata);
}

t_integer	integer_create(int value)
{
	t_integer	integer;

	if (!typemap_find(integer_typecode()))
		typemap_insert(integer_typecode(), integer_typedata());
	integer = malloc(sizeof(struct s_integer));
	if (integer == NULL)
	{
		typetree_destroy();
		exit(1);
	}
	typetree_insert(integer);
	integer->value = value;
	return (integer);
}

void	integer_destroy(t_integer integer)
{
	typetree_delete(integer);
}

int	main(void)
{
	t_integer	integer;

	integer = integer_create(42);
	integer_destroy(integer);
	return (0);
}