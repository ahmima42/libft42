/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmima <ahmima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:13:14 by ahmima            #+#    #+#             */
/*   Updated: 2024/11/17 14:57:53 by ahmima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	var;

	i = 0;
	var = (char) c;
	while (s[i])
	{
		if (s[i] == var)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	if (var == '\0')
		return ((char *)(s + i));
	return (NULL);
}
