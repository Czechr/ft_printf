/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztelmoud <ztelmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:33:02 by ztelmoud          #+#    #+#             */
/*   Updated: 2021/09/21 18:47:03 by ztelmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	print_int(t_flags *flags)
{
	long	j;

	j = va_arg(flags->args, int);
	flags->len = nbrlen(j);
	if (j < 0)
		ft_putchar('-', flags);
	ft_putnbr(j, flags);
}
