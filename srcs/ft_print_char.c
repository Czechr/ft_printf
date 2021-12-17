/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztelmoud <ztelmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:33:12 by ztelmoud          #+#    #+#             */
/*   Updated: 2021/09/21 18:33:13 by ztelmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	print_char(t_flags *flags)
{
	char	c;

	c = va_arg(flags->args, int);
	ft_putchar(c, flags);
}
