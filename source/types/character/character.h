/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:03:44 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/07 23:45:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

typedef struct s_character	*t_character;

struct s_character {
	char	value;
};

t_character	character_create(char value);
void		character_destroy(t_character character);

#endif