/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_args1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 00:22:37 by atemfack          #+#    #+#             */
/*   Updated: 2021/01/11 02:03:22 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*pf_extract_format(char **format)
{
	char	*specifiers;
	size_t	n;

	specifiers = "cspdiuxX%nf";
	n = 0;
	while ((*format)[n] && ft_strchr(specifiers, (*format)[n]) == NULL)
		n++;
	if (!((*format)[n++]))
		return (NULL);
	specifiers = *format;
	*format = *format + n;
	specifiers = ft_substr(specifiers, 0, n);
	if (specifiers == NULL)
		return (NULL);
	return (specifiers);
}

static void	pf_initialize(t_format *fpara)
{
	fpara->flags[0] = '1';
	fpara->flags[1] = '1';
	fpara->flags[2] = '1';
	fpara->flags[3] = 33;
	fpara->flags[4] = '1';
	fpara->width = 0;
	fpara->dot = 0;
	fpara->precision = 0;
	fpara->length[0] = '\0';
	fpara->length[1] = '\0';
	fpara->specifier = 0;
}

static int	pf_free(char *s1, t_format *x)
{
	if (s1)
		free(s1);
	if (x)
		free(x);
	return (-1);
}

int	pf_args1(char **format, va_list args, int ct)
{
	char		*nformat;
	t_format	*fpara;

	nformat = pf_extract_format(format);
	if (nformat == NULL)
		return (-1);
	fpara = (t_format *)malloc(sizeof(*fpara));
	if (fpara == NULL)
		return (pf_free(nformat, NULL));
	pf_initialize(fpara);
	if (pf_extract_fparameters2(nformat, args, fpara) < 0)
		return (pf_free(nformat, fpara));
	free(nformat);
	if (pf_check_fparameters3(fpara) == -1)
	{
		free(fpara);
		return (-1);
	}
	return (pf_putargs4(args, fpara, ct));
}
