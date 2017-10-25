/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_underline.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 21:30:28 by emmmhla           #+#    #+#             */
/*   Updated: 2016/07/15 21:33:59 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	ft_put_underline(char *str, void (*ft_print)(char*))
{
	tputs(tgetstr("us", NULL), 1, ft_put_char);
	(*ft_print)(str);
	tputs(tgetstr("ue", NULL), 1, ft_put_char);
}
