/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmds.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 09:02:17 by sfroidev          #+#    #+#             */
/*   Updated: 2023/12/04 09:08:34 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/mini.h"

extern int	g_ff;

void	ft_ctrl_c(int signal)
{
	if (signal == SIGINT)
	{
		rl_replace_line("", 0);
		rl_on_new_line();
		ft_printf("\n");
		rl_redisplay();
		if (g_ff == 1)
		{
			ft_printf("\033[999D  ");
			ft_printf("\033[999D");
			waitpid(-1, NULL, 0);
		}
		return ;
	}
	else if (signal == SIGQUIT)
	{
		if (g_ff == 1)
		{
			ft_printf("\033[999D  ");
			ft_printf("\033[999D");
			waitpid(-1, NULL, 0);
		}
		ft_printf("\033[2D  ");
		ft_printf("\033[2D");
	}
}
