/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lviguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:53:00 by lviguier          #+#    #+#             */
/*   Updated: 2024/06/11 12:53:47 by lviguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	copy = malloc(i + 1);
	if (copy == NULL)
		return (NULL);
	copy[i] = '\0';
	while (i != 0)
	{
		i--;
		copy[i] = src[i];
	}
	return (copy);
}
