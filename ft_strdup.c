/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agranjon <agranjon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:10:59 by agranjon          #+#    #+#             */
/*   Updated: 2023/11/13 07:58:53 by agranjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len_s;
	int		i;
	char	*ptr;

	len_s = ft_strlen(s) + 1;
	ptr = malloc(sizeof(char) * len_s);
	i = 0;
	if (!ptr)
	{
		return (0);
	}
	while (i < len_s)
	{
		ptr[i] = s[i];
		i++;
	}
	return (ptr);
}
