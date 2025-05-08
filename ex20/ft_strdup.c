/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:06:10 by juperez           #+#    #+#             */
/*   Updated: 2024/05/14 12:07:07 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strdup(char *src)
{
	char	*new_str;
	int		index;

	new_str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!new_str)
		return (0);
	index = 0;
	while (src[index])
	{
		new_str[index] = src[index];
		index++;
	}
	new_str[index] = '\0';
	return (new_str);
}
