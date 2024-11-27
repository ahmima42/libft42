/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmima <ahmima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:22:10 by ahmima            #+#    #+#             */
/*   Updated: 2024/11/13 14:36:23 by ahmima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	var;

	i = ft_strlen(s);
	var = (char) c;
	if (var == '\0')
		return ((char *)(s + i));
	while (i > 0)
	{
		i--;
		if (s[i] == var)
			return ((char *)(s + i));
	}
	if (s[0] == var)
		return ((char *)(s));
	return (NULL);
}
