/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztelmoud <ztelmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:34:46 by ztelmoud          #+#    #+#             */
/*   Updated: 2021/09/21 18:36:28 by ztelmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	print_unsignedint(t_flags *flags)
{
	unsigned int	j;

	j = va_arg(flags->args, unsigned int);
	flags->len = nbrlen(j);
	ft_putnbr(j, flags);
}
