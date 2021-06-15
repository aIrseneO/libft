/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

/*
** What if you weren't allowed to use the ternary (?:) operator
*/

void	*ft_ternary(int logic, void *value1, void *value2)
{
	if (logic)
		return (value1);
	return (value2);
}
