/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztelmoud <ztelmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:32:16 by ztelmoud          #+#    #+#             */
/*   Updated: 2021/09/21 18:50:32 by ztelmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_parsing(int i, const char *str, t_flags *flags)
{
	if (flag_reset(str, flags) == -1)
		return (-1);
	i++;
	i = print_type(str, i, flags);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	t_flags	flags;

	i = 0;
	parse_init(&flags);
	va_start(flags.args, str);
	while (str[i])
	{
		if (str[i] == '%')
			i = ft_printf_parsing(i, str, &flags);
		else
		{
			ft_putchar(str[i], &flags);
			i++;
		}
	}
	return (flags.ret);
}
