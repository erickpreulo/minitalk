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

void	recive(int sig)
{
	static size_t	i;
	static int		bit;
	static char		buf[1000];

	if (--bit == -1)
	{
		bit = 6;
		++i;
	}
	buf[i] &= ~(1 << 7);
	if (sig == SIGUSR1)
		buf[i] |= (1 << bit);
	else if (sig == SIGUSR2)
		buf[i] &= ~(1 << bit);
	if (i == 999 || buf[i] == 127)
	{
		buf[i] = '\0';
		write(1, buf, i + 1);
		ft_memset(buf, i);                                                                                  
		i = 0;
		bit = 0;
	}
}

int     main(int argc, char **argv)
{
    pid_t pid;
    t_sig server;

    (void)argv;
    if (argc != 1)
    {
        ft_putstr(ERROR3);
        return (1);
    }
    else
    {
        pid = getpid();
        server.pid_str = (ft_itoa(pid));
        if (server.pid_str == 0)
		    exit(0);
	    ft_putstr(server.pid_str);
        ft_putchar('\n');
        while (42)
        {
            signal(SIGUSR1, recive);
            signal(SIGUSR2, recive);
        }
    }
}
