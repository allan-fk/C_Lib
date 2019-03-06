/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alklein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 14:47:21 by alklein           #+#    #+#             */
/*   Updated: 2018/09/12 11:23:33 by alklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;
	int i;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
