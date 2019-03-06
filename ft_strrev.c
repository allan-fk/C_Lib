/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alklein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 08:43:01 by alklein           #+#    #+#             */
/*   Updated: 2018/09/11 21:35:02 by alklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	int		n;
	char	tmp;

	i = 0;
	j = 0;
	n = ft_strlen(str);
	i = n - 1;
	while (i > j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i--;
		j++;
	}
	return (str);
}
