/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alklein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:09:15 by alklein           #+#    #+#             */
/*   Updated: 2018/09/12 11:57:46 by alklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int diviseur;

	diviseur = 6;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2 || nb == 3)
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
