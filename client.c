/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 17:25:25 by egomes            #+#    #+#             */
/*   Updated: 2021/06/20 17:25:25 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "signal.h"

int     main(int argc, char **argv)
{
    t_sig sig;

    if (argc < 3)
    {
        ft_putstr(ERROR1);
        return (1);
    }
    sig.pid_server = ft_atoi(argv[1]);
    if (sig.pid_server == 0)
    {
        ft_putstr(ERROR2);
        return (1);
    }
}
