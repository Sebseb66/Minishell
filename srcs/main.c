/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: croche <croche@student.42.fr>       	     +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:05:15 by croche            #+#    #+#             */
/*   Updated: 2023/10/31 15:26:47 by croche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/mini.h"

int	g_ff;

void	ft_init(t_data *data, char **env)
{
	ft_getenv(data, env);
	ft_getpwd(data);
	ft_gethome(data);
	g_ff = 0;
	data->term = dup(1);
	data->termo = dup(0);
	data->errnum = 0;
}

int	main(int argc, char **argv, char **env)
{
	t_data				*data;
	char				*prompt;
	struct sigaction	sig;

	(void)argc;
	(void)argv;
	sig.sa_handler = ft_ctrl_c;
	sig.sa_flags = SA_SIGINFO;
	sigemptyset(&sig.sa_mask);
	sigaction(SIGINT, &sig, NULL);
	sigaction(SIGQUIT, &sig, NULL);
	data = ft_calloc(1, sizeof(t_data));
	ft_init(data, env);
	while (1)
	{
		prompt = readline("Minishell $>");
		if (!prompt)
			ft_exit(data, prompt);
		if (prompt[0])
			add_history(prompt);
		ft_parsingg(data, prompt);
		free(prompt);
	}
	return (0);
}
