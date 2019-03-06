/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alklein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 14:47:21 by alklein           #+#    #+#             */
/*   Updated: 2018/09/12 21:00:22 by alklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int resultat;

	i = 1;
	resultat = 0;
	while (resultat <= nb)
	{
		i++;
		resultat = i * i;
		if (nb == resultat)
			return (i);
	}
	return (0);
}
