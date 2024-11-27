/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmima <ahmima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:33:12 by ahmima            #+#    #+#             */
/*   Updated: 2024/11/13 14:21:40 by ahmima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	unsigned char	*p;
	size_t			i;
	size_t			taille;

	taille = num * size;
	if (num != 0 && ((taille / num) != size))
		return (NULL);
	i = 0;
	p = malloc(taille);
	if (!p)
		return (NULL);
	while (i < taille)
		p[i++] = 0;
	return (p);
}
