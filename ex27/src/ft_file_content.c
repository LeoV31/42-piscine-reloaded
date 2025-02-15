/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_content.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lviguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:06:55 by lviguier          #+#    #+#             */
/*   Updated: 2024/06/11 13:06:57 by lviguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_file_content(char *filepath)
{
	int		fd;
	char	buf[BUF_SIZE + 1];
	int		bytes;

	fd = open(filepath, O_RDONLY);
	if (fd == -1)
		ft_putstr("Cannot read file.\n", 2, 0);
	else
	{
		bytes = read(fd, buf, BUF_SIZE);
		while (bytes > 0)
		{
			buf[bytes] = '\0';
			ft_putstr(buf, 1, bytes);
			bytes = read(fd, buf, BUF_SIZE);
		}
		if (bytes == -1)
			return (ft_err_message());
		if (close(fd) == -1)
			return (ft_err_message());
	}
}

void	ft_err_message(void)
{
	ft_putstr("Cannot read file.\n", 2, 0);
}
