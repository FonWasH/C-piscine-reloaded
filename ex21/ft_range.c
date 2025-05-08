/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:09:03 by juperez           #+#    #+#             */
/*   Updated: 2024/05/14 12:09:54 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*new_tab;
	int	index;

	if (min >= max)
		return (NULL);
	new_tab = (int *)malloc(sizeof(int) * (max - min));
	if (!new_tab)
		return (NULL);
	index = 0;
	while ((min + index) < max)
	{
		new_tab[index] = min + index;
		index++;
	}
	return (new_tab);
}
