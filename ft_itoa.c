/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agranjon <agranjon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 07:32:17 by agranjon          #+#    #+#             */
/*   Updated: 2023/11/13 09:56:26 by agranjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_int(int n)
{
	long long int	i;

	i = 1;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	ft_fill_str(char *str, int size, long long int n)
{
	int	index;

	index = 0;
	str[size] = '\0';
	if (n < 0)
	{
		n = n * -1;
		str[0] = '-';
		index = 1;
	}
	size = size -1;
	while (size >= index)
	{
		str[size] = n % 10 + '0';
		n = n / 10;
		size--;
	}
}

char	*ft_itoa(int n)
{
	int		len_str;
	char	*str;

	n = (long long)n;
	len_str = ft_len_int(n);
	if (n == -2147483648)
	{
		str = malloc(sizeof(char) * (12));
		if (!str)
			return (NULL);
		ft_fill_str(str, 11, n);
		return (str);
	}
	str = malloc(sizeof(char) * (len_str + 1));
	if (!str)
		return (NULL);
	ft_fill_str(str, len_str, n);
	str[len_str] = '\0';
	return (str);
}
