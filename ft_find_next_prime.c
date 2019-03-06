/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alklein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:42:40 by alklein           #+#    #+#             */
/*   Updated: 2018/09/12 18:07:48 by alklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int diviseur;

	diviseur = 6;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0 || nb % 7 == 0)
		return (0);
	while (diviseur * diviseur - 2 * diviseur + 1 <= nb)
	{
		if (nb % (diviseur - 1) == 0)
			return (0);
		if (nb % (diviseur + 1) == 0)
			return (0);
		diviseur += 6;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
		while (ft_is_prime(nb) == 0)
			++nb;
	return (nb);
}
