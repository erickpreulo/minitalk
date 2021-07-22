/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 07:00:10 by egomes            #+#    #+#             */
/*   Updated: 2021/07/22 17:06:28 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "signal.h"

void    ft_putstr(char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        ft_putchar(s[i]);
        i++;
    }
}
