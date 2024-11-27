/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmima <ahmima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:33:11 by ahmima            #+#    #+#             */
/*   Updated: 2024/11/13 14:34:24 by ahmima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p_s;

	p_s = (const unsigned char *) s;
	while (n > 0)
	{
		if (*p_s == (unsigned char) c)
			return ((void *)p_s);
		p_s++;
		n--;
	}
	return (NULL);
}
