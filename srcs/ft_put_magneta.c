/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_magneta.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 21:28:07 by emmmhla           #+#    #+#             */
/*   Updated: 2016/07/15 21:30:05 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	ft_put_magneta(char *str)
{
	ft_put_str(MAGNETA);
	ft_put_str(str);
	ft_put_endl(NO_COLOUR);
}
