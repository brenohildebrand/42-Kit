/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:03:44 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 11:11:00 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "kit.h"

typedef char	*t_character;

t_typedata	character(void);
t_character	character_create(void);
void		character_destroy(t_character character);
void		character_init(t_character character, char value);

#endif