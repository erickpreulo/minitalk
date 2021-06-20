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

typedef struct      s_sig
{
    int     i;
    char    *buff;
    int     cpy;
}                   t_sig;
#endif
