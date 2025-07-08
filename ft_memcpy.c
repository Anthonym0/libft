/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agranjon <agranjon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:30:34 by agranjon          #+#    #+#             */
/*   Updated: 2023/11/13 07:56:35 by agranjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = n;
	while (n > 0)
	{
		*(unsigned char *)dest = *(unsigned char *)src;
		src++;
		dest++;
		n--;
	}
	while (i > 0)
	{
		dest--;
		i--;
	}
	return (dest);
}
