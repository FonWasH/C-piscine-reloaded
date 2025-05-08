/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:05:32 by juperez           #+#    #+#             */
/*   Updated: 2024/05/14 13:13:01 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int ac, char *av[])
{
	if (ac == 2)
	{
		if (ft_display_file(av[1]) == -1)
			ft_error(ERROR_READ_FILE);
	}
	else if (ac == 1)
		ft_error(ERROR_NAME_MISSING);
	else if (ac > 2)
		ft_error(ERROR_TOO_MANY_ARGS);
	return (0);
}
