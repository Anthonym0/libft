/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agranjon <agranjon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:14:24 by agranjon          #+#    #+#             */
/*   Updated: 2023/11/13 08:03:46 by agranjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int			i;
	int			j;
	size_t		i_n;

	i_n = 0;
	i = 0;
	j = 0;
	while (i_n < n && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
		i_n++;
	}
	while (i_n < n)
	{
		dest[i_n] = '\0';
		i_n++;
	}
	return (dest);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	cpy_len;

	src_len = ft_strlen(src);
	cpy_len = 0;
	if (size > 0)
	{
		cpy_len = src_len;
		if (src_len >= size - 1)
			cpy_len = size - 1;
		ft_strncpy(dest, src, cpy_len);
		dest[cpy_len] = '\0';
	}
	return (src_len);
}
