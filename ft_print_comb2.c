/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alklein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 16:36:48 by alklein           #+#    #+#             */
/*   Updated: 2018/09/03 03:00:33 by alklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int tab[3];

	while (tab[0] <= 98)
	{
		tab[2]++;
		tab[1] = tab[2];
		while (tab[1] <= 99)
		{
			ft_putchar(tab[0] / 10 + '0');
			ft_putchar(tab[0] % 10 + '0');
			ft_putchar(' ');
			ft_putchar(tab[1] / 10 + '0');
			ft_putchar(tab[1] % 10 + '0');
			if (tab[0] == 98)
				return ;
			ft_putchar(',');
			ft_putchar(' ');
			tab[1]++;
		}
		tab[0]++;
	}
}
