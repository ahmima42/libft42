/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmima <ahmima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:50:08 by ahmima            #+#    #+#             */
/*   Updated: 2024/11/17 14:47:03 by ahmima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_mot(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		while ((str[i] != '\0') && str[i] == c)
			i++;
		if (str[i] != '\0')
			count++;
		while ((str[i] != '\0') && str[i] != c)
			i++;
	}
	return (count);
}

static int	len_mot(char const *mot, char c)
{
	int	i;

	i = 0;
	while (mot[i] && mot[i] != c)
	{
		i++;
	}
	return (i);
}

static void	fill_table(char *table, char const *s, char c)
{
	while (*s && *s != c)
	{
		*table++ = *s++;
	}
	*table = '\0';
}

static void	frree(char **res)
{
	size_t	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	size_t	w_len;

	if (!s)
		return (NULL);
	i = count_mot (s, c);
	j = 0;
	split = (char **) malloc((i + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (j < i)
	{
		while (*s == c)
			s++;
		w_len = len_mot(s, c);
		split[j] = (char *) malloc(w_len + 1);
		if (!split[j])
			return (frree(split), NULL);
		fill_table(split[j], s, c);
		s += w_len;
		j++;
	}
	return (split[j] = NULL, split);
}
