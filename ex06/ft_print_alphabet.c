/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lviguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:18:58 by lviguier          #+#    #+#             */
/*   Updated: 2024/06/11 13:57:11 by lviguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(int a);

void	ft_print_alphabet(void)
{
	int	a;

	a = 'a';
	while (a <= 'z')
	{
		ft_putchar(a);
		a++;
	}
}
/**
int	main(void)
{
	ft_print_alphabet();
}
**/
