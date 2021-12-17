/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztelmoud <ztelmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:34:27 by ztelmoud          #+#    #+#             */
/*   Updated: 2021/09/21 18:34:35 by ztelmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	print_string(t_flags *flags)
{
	char	*str;
	int		i;

	i = 0;
	str = va_arg(flags->args, char *);
	if (str == NULL)
		str = "(null)";
	flags->len = ft_strlen(str);
	while (i < flags->len)
	{
		ft_putchar(str[i], flags);
		i++;
	}
}
