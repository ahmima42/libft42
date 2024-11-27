/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmima <ahmima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:27:32 by ahmima            #+#    #+#             */
/*   Updated: 2024/11/17 15:39:55 by ahmima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_s;
	size_t	i;
	size_t	len_dest;

	len_s = ft_strlen(src);
	if (!dest && size == 0)
		return (len_s);
	i = 0;
	len_dest = ft_strlen(dest);
	if (len_dest >= size)
		return (size + len_s);
	i = len_dest;
	while (*src && i < size - 1)
	{
		dest[i++] = *src++;
	}
	dest[i] = '\0';
	return (len_dest + len_s);
}
