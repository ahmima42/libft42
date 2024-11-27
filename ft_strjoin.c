/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmima <ahmima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 20:00:47 by ahmima            #+#    #+#             */
/*   Updated: 2024/11/13 14:35:23 by ahmima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len_t;
	size_t		i;
	size_t		j;
	char		*pattern;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup((char *) s2));
	if (!s2)
		return (ft_strdup ((char *) s1));
	len_t = ft_strlen(s1) + ft_strlen(s2);
	pattern = (char *) malloc (len_t + 1);
	if (!pattern)
		return (NULL);
	while (s1[i])
		pattern[i++] = s1[j++];
	j = 0;
	while (s2[j])
		pattern[i++] = s2[j++];
	pattern[i] = '\0';
	return (pattern);
}
