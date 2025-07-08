/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agranjon <agranjon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:11:42 by agranjon          #+#    #+#             */
/*   Updated: 2023/11/13 07:56:47 by agranjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	temp;
	unsigned char	temp2;

	i = n;
	temp = *(unsigned char *)src;
	while (n > 0)
	{
		src++;
		temp2 = *(unsigned char *)src;
		*(unsigned char *)dest = temp;
		temp = temp2;
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
