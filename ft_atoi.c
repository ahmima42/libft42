/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmima <ahmima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:59:42 by ahmima            #+#    #+#             */
/*   Updated: 2024/11/13 14:22:27 by ahmima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	testfct(int signe, long res)
{
	if (signe == 1 && res > LONG_MAX / 10)
		return (-1);
	else if (signe == -1 && res > LONG_MAX / 10)
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	res;
	int		signe;

	i = 0;
	res = 0;
	signe = 1;
	while ((str[i] != '\0') && (str[i] == 32
			|| (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		if (testfct(signe, res) == 0 || testfct(signe, res) == -1)
			return (testfct(signe, res));
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * signe);
}
