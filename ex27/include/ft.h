/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lviguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:09:02 by lviguier          #+#    #+#             */
/*   Updated: 2024/06/11 13:09:05 by lviguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define BUF_SIZE 2048

# include <unistd.h>
# include <fcntl.h>

void	ft_putchar(char c, int std);
void	ft_putstr(char *str, int std, int len);
void	ft_file_content(char *filepath);
void	ft_err_message(void);

#endif
