/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmima <ahmima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:19:35 by ahmima            #+#    #+#             */
/*   Updated: 2024/11/12 18:14:05 by ahmima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	unsigned char	cr;

	if (c < 0 || c > 255)
		return (0);
	cr = (unsigned char) c;
	if (cr >= 32 && cr <= 126)
		return (1);
	return (0);
}
