/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztelmoud <ztelmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:35:51 by ztelmoud          #+#    #+#             */
/*   Updated: 2021/09/22 10:38:41 by ztelmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_flags
{
	va_list	args;
	int		width;
	int		left;
	int		pad;
	int		dot;
	int		prec;
	int		len;
	int		minus;
	int		precmin;
	int		exception;
	int		ret;
}				t_flags;

int		ft_printf(const char *str, ...);
int		ft_printf_parsing(int i, const char *str, t_flags *flags);
int		flag_reset(const char *str, t_flags *flags);
int		ft_charchr(char c, char *haystack);
int		print_type(const char *str, int i, t_flags *flags);
int		nbrlen(long n);
int		ft_strlen(char *str);
int		ft_put_lnbr_base(unsigned long nbr, char *base, t_flags *flags);
int		ft_put_lnbr_base_long(unsigned long nbr, char *base, t_flags *flags);
int		ft_lnbr_len(unsigned long nbr, char *base);

char	*ft_itoa(int n);

void	ft_putchar(char c, t_flags *flags);
void	ft_putstr(char *s, t_flags *flags);
void	ft_putnbr(long n, t_flags *flags);
void	parse_init(t_flags *flags);

void	print_int(t_flags *flags);
void	print_unsignedint(t_flags *flags);
void	print_char(t_flags *flags);
void	print_percent(t_flags *flags);
void	print_string(t_flags *flags);

void	print_pointer(t_flags *flags);
void	print_minihexa(t_flags *flags);
void	print_maxihexa(t_flags *flags);
void	ft_printzero(int size, t_flags *flags);

#endif
