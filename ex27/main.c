/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lviguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:06:20 by lviguier          #+#    #+#             */
/*   Updated: 2024/06/11 13:15:35 by lviguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n", 2, 0);
	if (argc > 2)
		ft_putstr("Too many arguments.\n", 2, 0);
	if (argc == 2)
		ft_file_content(argv[1]);
	return (0);
}
