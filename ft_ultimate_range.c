/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alklein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 08:11:54 by alklein           #+#    #+#             */
/*   Updated: 2018/09/13 15:40:21 by alklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*table;
	int	i;

	if (min >= max)
		return (0);
	table = (int*)malloc((max - min) * sizeof(int));
	if (table == NULL)
		return (0);
	i = 0;
	while (min <= max - 1)
	{
		table[i] = min++;
		i++;
	}
	*range = table;
	return (i);
}
