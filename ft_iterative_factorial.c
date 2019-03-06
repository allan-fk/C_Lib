/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alklein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 10:39:36 by alklein           #+#    #+#             */
/*   Updated: 2018/09/12 15:28:14 by alklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int fac;

	if (nb < 0 || nb > 16)
		return (0);
	else if (nb == 0)
		return (1);
	i = nb - 1;
	fac = nb;
	while (i > 1)
	{
		fac = i * fac;
		i = i - 1;
	}
	return (fac);
}
