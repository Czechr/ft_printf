/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztelmoud <ztelmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:34:13 by ztelmoud          #+#    #+#             */
/*   Updated: 2021/09/21 18:34:14 by ztelmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	print_pointer(t_flags *flags)
{
	unsigned long long	i;

	i = va_arg(flags->args, unsigned long);
	flags->len = ft_lnbr_len(i, "0123456789abcdef");
	ft_putchar('0', flags);
	ft_putchar('x', flags);
	ft_put_lnbr_base_long(i, "0123456789abcdef", flags);
}
