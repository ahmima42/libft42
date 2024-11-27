/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmima <ahmima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:34:04 by ahmima            #+#    #+#             */
/*   Updated: 2024/11/13 14:33:45 by ahmima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dst;
	const unsigned char	*p_src;

	if (dest == NULL && src == NULL)
		return (NULL);
	else if (dest == src)
		return (dest);
	p_dst = (unsigned char *) dest;
	p_src = (const unsigned char *) src;
	if (p_dst < p_src)
		return (ft_memcpy(dest, src, n));
	while (n > 0)
	{
		*(p_dst + n - 1) = *(p_src + n - 1);
		n--;
	}
	return (dest);
}
