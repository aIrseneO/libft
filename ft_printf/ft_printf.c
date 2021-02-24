/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 13:30:02 by atemfack          #+#    #+#             */
/*   Updated: 2021/01/11 03:22:19 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		pf_write_all_text_before_format(const char **format)
{
	int			ct;
	const char	*tmp;

	ct = 0;
	tmp = *format;
	while (**format && **format != '%')
	{
		(*format)++;
		ct++;
	}
	if (ct)
		write(1, tmp, ct);
	return (ct);
}

int				ft_printf(const char *format, ...)
{
	va_list		args;
	int			ct;
	int			n;

	va_start(args, (char *)format);
	if (!format)
		return (-1);
	ct = 0;
	n = 0;
	while (*format)
	{
		ct += pf_write_all_text_before_format(&format);
		if (*format == '%')
		{
			format++;
			n = pf_args1((char **)(&format), args, ct);
			if (n < 0)
				break ;
			ct += n;
		}
	}
	va_end(args);
	if (n < 0)
		return (-1);
	return (ct);
}
