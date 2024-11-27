/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmima <ahmima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:06:08 by ahmima            #+#    #+#             */
/*   Updated: 2024/11/13 14:23:56 by ahmima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		len++;
		nb *= -1;
	}
	while (nb > 0)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	val;
	int		leng;
	char	*tab;

	val = n;
	leng = len(val);
	if (val == 0)
		return (ft_strdup("0"));
	if (val == -2147483648)
		return (ft_strdup("-2147483648"));
	tab = (char *) malloc((leng + 1));
	if (tab == NULL)
		return (NULL);
	if (val < 0)
	{
		tab[0] = '-';
		val *= -1;
	}
	tab[leng--] = '\0';
	while (val > 0)
	{
		tab[leng--] = (val % 10) + '0';
		val = val / 10;
	}
	return (tab);
}
