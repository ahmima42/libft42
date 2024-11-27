/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmima <ahmima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:37:41 by ahmima            #+#    #+#             */
/*   Updated: 2024/11/13 14:25:33 by ahmima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	size_t	len;

	len = 0;
	temp = lst;
	while (temp)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
