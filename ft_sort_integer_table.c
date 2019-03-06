/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alklein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 08:33:22 by alklein           #+#    #+#             */
/*   Updated: 2018/09/10 10:59:31 by alklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int passage;
	int permutation;
	int i;
	int tmp;

	passage = 0;
	permutation = 1;
	while (permutation == 1)
	{
		permutation = 0;
		passage++;
		i = 0;
		while (i < size - passage)
		{
			if (tab[i] > tab[i + 1])
			{
				permutation = 1;
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
	}
}
