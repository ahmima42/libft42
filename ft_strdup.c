/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmima <ahmima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:46:19 by ahmima            #+#    #+#             */
/*   Updated: 2024/11/17 13:10:10 by ahmima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*s;
	size_t	i;

	i = 0;
	len = ft_strlen(src);
	s = (char *) malloc (sizeof(char) * (len + 1));
	if (!(s))
		return (NULL);
	while (i < len)
	{
		s[i] = src[i];
		i++;
	}
	s[len] = '\0';
	return (s);
}
