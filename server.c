/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 17:25:29 by egomes            #+#    #+#             */
/*   Updated: 2021/06/20 17:25:29 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "signal.h"

int     main(int argc, char **argv)
{
    pid_t pid;

    (void)argv;
    if (argc != 1)
    {
        ft_putstr(ERROR3);
        return (1);
    }
    else
    {
        pid = getpid();
    }
}
