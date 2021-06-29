/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 17:28:45 by egomes            #+#    #+#             */
/*   Updated: 2021/06/29 17:33:35 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "signal.h"

int	get_size(int n)
{
	int		size;

	size = 0;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}
char	*ft_newstr(size_t size)
{
	char	*str;

	str = malloc((size + 1) * sizeof(char));
	if (!(str))
		return (NULL);
	str[size] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = n;
	size = !(n > 0);
	if (nbr < 0)
		nbr = -nbr;
	size += get_size(n);
	str = ft_newstr(size);
	str[size--] = '\0';
	while (nbr > 0)
	{
		str[size--] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (size == 0 && str[1] == '\0')
		str[size] = '0';
	else if (size == 0 && str[1] != '\0')
		str[size--] = '-';
	return (str);
}
