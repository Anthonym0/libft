/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agranjon <agranjon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:50:21 by agranjon          #+#    #+#             */
/*   Updated: 2023/11/13 07:58:47 by agranjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s)
	{
		if (c > 255)
			return ((char *)s);
		if (c <= 0)
			return ((char *)s + ft_strlen(s));
		while (s[i] != '\0')
		{
			if (s[i] == c)
			{
				return ((char *)s + i);
			}
			i++;
		}
		if (c == '\0')
		{
			return ((char *)s + i);
		}
	}
	return (NULL);
}
