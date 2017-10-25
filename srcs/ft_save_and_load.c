/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_and_load.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 22:40:19 by emmmhla           #+#    #+#             */
/*   Updated: 2016/07/15 22:42:31 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

t_select	*ft_save_and_load(t_select *select, int mode)
{
	static t_select	*tmp = NULL;

	if (mode == 0)
		tmp = select;
	return (tmp);
}
