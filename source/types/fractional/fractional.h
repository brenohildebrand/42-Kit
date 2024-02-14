/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractional.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:37:17 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/13 15:37:22 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTIONAL_H
# define FRACTIONAL_H

typedef struct s_fractional	*t_fractional;

struct s_fractional {
	double	value;
};

t_fractional	fractional_create(double value);
void			fractional_destroy(t_fractional fractional);

#endif