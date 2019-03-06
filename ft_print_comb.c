/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alklein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 18:06:52 by alklein           #+#    #+#             */
/*   Updated: 2018/08/30 05:14:22 by alklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int tab[3];

	while (tab[0] <= 7)
	{
		tab[1] = tab[0] + 1;
		while (tab[1] <= 8)
		{
			tab[2] = tab[1] + 1;
			while (tab[2] <= 9)
			{
				ft_putchar(tab[0] + 48);
				ft_putchar(tab[1] + 48);
				ft_putchar(tab[2] + 48);
				if (tab[0] == 7)
					return ;
				ft_putchar(',');
				ft_putchar(' ');
				tab[2]++;
			}
			tab[1]++;
		}
		tab[0]++;
	}
}
