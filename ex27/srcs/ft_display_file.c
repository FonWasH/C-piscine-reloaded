/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:03:10 by juperez           #+#    #+#             */
/*   Updated: 2024/05/14 13:03:35 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_display_file(char *path)
{
	int		fd;
	char	buffer[BUFFER_SIZE];

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (fd);
	while (read(fd, buffer, BUFFER_SIZE) > 0)
		write(1, buffer, BUFFER_SIZE);
	return (fd);
}
