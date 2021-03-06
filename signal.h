/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 17:33:20 by egomes            #+#    #+#             */
/*   Updated: 2021/06/20 17:33:20 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SIGNAL_H
# define SIGNAL_H

# include <signal.h>
# include <unistd.h>
# include <stdlib.h>

# define ERROR1 "usage: ./client [pid server] [message]\n"
# define ERROR2 "Unknow PID.\n"
# define ERROR3 "usage: ./server\n"

typedef struct s_sig
{
	int		pid_server;
	char	*pid_str;
	char	*buff;
	int		cpy;
	char	*av;
}					t_sig;

void	ft_putchar(char c);
void	ft_putstr(char *s);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
void	receive(int sig);
void	ft_memset(char *str, int i);

#endif
