/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lviguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:08:15 by lviguier          #+#    #+#             */
/*   Updated: 2024/06/11 13:08:29 by lviguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putstr(char *str, int std, int len)
{
	int	i;

	i = 0;
	if (len == 0)
	{
		while (str[len])
			len++;
	}
	while (i < len)
	{
		ft_putchar(str[i], std);
		i++;
	}
}
