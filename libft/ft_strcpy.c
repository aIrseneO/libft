/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

char	*ft_strcpy(char *dst, char const *src)
{
	char	*tmp;

	tmp = dst;
	while (*src)
		*tmp++ = *src++;
	*tmp = '\0';
	return (dst);
}
