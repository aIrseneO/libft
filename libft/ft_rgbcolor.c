/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

int	ft_rgbcolor(unsigned short r, unsigned short g, unsigned short b)
{
	int	color;

	color = r / 16;
	color = color * 16 + r % 16;
	color = color * 16 + g / 16;
	color = color * 16 + g % 16;
	color = color * 16 + b / 16;
	return (color * 16 + b % 16);
}
