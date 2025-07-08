/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agranjon <agranjon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:12:59 by agranjon          #+#    #+#             */
/*   Updated: 2023/11/13 07:58:36 by agranjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_separator(char c, char separator)
{
	if (c == separator)
		return (1);
	return (0);
}

static int	count_words(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (is_separator(s[i], c))
			i++;
		if (!is_separator(s[i], c) && s[i] != '\0')
		{
			count++;
		}
		while (!is_separator(s[i], c) && s[i] != '\0')
			i++;
	}
	return (count);
}

static int	count_alpha(char const *s, char c, int index)
{
	int	count;

	count = 0;
	while (s[index] != '\0' && !is_separator(s[index], c))
	{
		count++;
		index++;
	}
	return (count);
}

static char	*ft_filltab(char const *s, char c, int *i_s)
{
	char	*temp;
	int		k;

	k = 0;
	temp = malloc((count_alpha(s, c, *i_s) + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	while (s[*i_s] != '\0' && !is_separator(s[*i_s], c))
	{
		temp[k] = s[*i_s];
		k++;
		*i_s = *i_s + 1;
	}
	temp[k] = '\0';
	return (temp);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		index_tab;
	int		i;

	i = 0;
	index_tab = 0;
	tab = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!tab || !s)
		return (tab);
	while (index_tab < count_words(s, c))
	{
		while (is_separator(s[i], c))
			i++;
		tab[index_tab] = ft_filltab(s, c, &i);
		if (!tab[index_tab])
		{
			while (--index_tab >= 0)
				free(tab[index_tab]);
			free(tab);
			return (NULL);
		}
		index_tab++;
	}
	tab[index_tab] = 0;
	return (tab);
}
