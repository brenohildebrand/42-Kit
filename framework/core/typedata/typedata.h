/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typedata.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:04:00 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/17 10:07:16 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPEDATA_H
# define TYPEDATA_H

typedef void				*t_any;
typedef struct s_typedata	*t_typedata;

struct s_typedata {
	void	(*destroy)(t_any);
};

#endif