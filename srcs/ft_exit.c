/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 23:31:51 by emmmhla           #+#    #+#             */
/*   Updated: 2016/07/16 02:03:42 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	ft_exit(void)
{
	t_select	*select;

	select = ft_save_and_load(NULL, 1);
	ft_free_mem(select);
	ft_reset_term_behavior(&(select->term));
	exit(0);
}
