/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

char	*ft_strdelchr(char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[j])
	{
		if (str[j] != c)
			str[i++] = str[j++];
		else
			j++;
	}
	str[i] = '\0';
	return (str);
}
