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

static int	send_ascii(t_sig *sig, char c)
{
	int	bit;

	bit = 7;
	while (--bit > -1)
	{
		if (c & (1 << bit))
			kill(sig->pid_server, SIGUSR1);
		else
			kill(sig->pid_server, SIGUSR2);
		usleep(50);
	}
	return (0);
}

static int	send_message(t_sig *sig)
{
	int	i;

	i = 0;
	while (sig->av[i] >= 32 && sig->av[i] <= 126)
	{
		if (send_ascii(sig, sig->av[i]))
			return (1);
		++i;
	}
	i = 0;
	while (i < 7)
	{
		kill(sig->pid_server, SIGUSR1);
		usleep(50);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_sig	sig;

	sig.av = argv[2];
	if (argc != 3)
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
	send_message(&sig);
	return (0);
}
