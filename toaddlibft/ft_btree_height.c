/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

int		ft_btree_height(t_tree *node)
{
	int static	hleft;
	int static	hright;

	if (!(node))
		return (0);
	hleft = ft_btree_height(node->left);
	hright = ft_btree_height(node->right);
	return (max(hleft, hright) + 1);
}
