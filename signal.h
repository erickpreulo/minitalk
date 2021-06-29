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

#ifndef _SIGNAL_H_
# define _SIGNAL_H_

#include <signal.h>
#include <unistd.h>

#define ERROR1 "usage: ./client [pid server] [message]\n"
#define ERROR2 "Unknow PID.\n"
#define ERROR3 "usage: ./server\n"

typedef struct      s_sig
{
    int     pid_server;
    char    *buff;
    int     cpy;
}                   t_sig;

void    ft_putchar(char c);
void    ft_putstr(char *c);
int	ft_atoi(const char *str);

#endif
