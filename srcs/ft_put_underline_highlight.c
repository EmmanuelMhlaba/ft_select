/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_underline_highlight.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 21:42:49 by emmmhla           #+#    #+#             */
/*   Updated: 2016/07/15 21:45:13 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	ft_put_underline_highlight(char *str, void (*ft_print)(char*))
{
	tputs(tgetstr("so", NULL), 1, ft_put_char);
	tputs(tgetstr("us", NULL), 1, ft_put_char);
	(*ft_print)(str);
	tputs(tgetstr("ue", NULL), 1, ft_put_char);
	tputs(tgetstr("se", NULL), 1, ft_put_char);
}
