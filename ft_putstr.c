/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 07:00:10 by egomes            #+#    #+#             */
/*   Updated: 2021/06/29 17:34:56 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "signal.h"

void    ft_putstr(char *c)
{
    int i;

    i = 0;
    while (c[i] != '\0')
    {
        ft_putchar(c[i]);
        i++;
    }
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (fd != 0 && s != 0)
	{
		while (s[i])
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}
