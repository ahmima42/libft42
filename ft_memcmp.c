/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmima <ahmima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:11:28 by ahmima            #+#    #+#             */
/*   Updated: 2024/11/11 20:24:37 by ahmima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p_s1;
	const unsigned char	*p_s2;

	p_s1 = (const unsigned char *) s1;
	p_s2 = (const unsigned char *) s2;
	while (n > 0)
	{
		if (*p_s1 != *p_s2)
			return (*p_s1 - *p_s2);
		n--;
		p_s1++;
		p_s2++;
	}
	return (0);
}
