/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agranjon <agranjon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:38:54 by agranjon          #+#    #+#             */
/*   Updated: 2023/11/13 07:57:01 by agranjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = n;
	while (n > 0)
	{
		*(unsigned char *)s = c;
		s++;
		n--;
	}
	while (i > 0)
	{
		s--;
		i--;
	}
	return (s);
}
