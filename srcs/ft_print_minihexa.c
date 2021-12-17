/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_minihexa.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztelmoud <ztelmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:33:41 by ztelmoud          #+#    #+#             */
/*   Updated: 2021/09/21 18:33:44 by ztelmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	print_minihexa(t_flags *flags)
{
	int	i;

	i = va_arg(flags->args, unsigned long);
	flags->len = ft_lnbr_len(i, "0123456789abcdef");
	ft_put_lnbr_base(i, "0123456789abcdef", flags);
}
