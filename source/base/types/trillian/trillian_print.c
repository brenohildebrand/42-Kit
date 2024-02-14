/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trillian_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:16:59 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/13 15:38:15 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "trillian.h"
// #include <stdio.h>

// static void	helper(t_trillian trillian)
// {
// 	if (trillian == NULL)
// 		return ;
// 	if (trillian->ltree != NULL)
// 		helper(trillian->ltree);
// 	if (trillian->type)
// 		printf("address: %p\t\t - \ttype: %s\n",
// 				trillian->address, trillian->type->name);
// 	else
// 		printf("address: %p\t\t - \ttype: %s\n",
// 				trillian->address, "allocated");
// 	if (trillian->rtree != NULL)
// 		helper(trillian->rtree);	
// }
// void	trillian_print(void)
// {
// 	t_trillian	*trillian;
// 	trillian = trillian_get();
// 	printf("[trillian]\n");
// 	helper(*trillian);
// 	print("\n");
// }
