/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prompt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 09:02:58 by sfroidev          #+#    #+#             */
/*   Updated: 2023/12/04 09:07:39 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/mini.h"

char	*ft_readlines(char *temp, char *name, char *split)
{
	char	*prompt;

	temp = ft_strdup(name);
	free(name);
	name = ft_strjoin(temp, split);
	free(temp);
	temp = ft_strdup(name);
	free(name);
	name = ft_strjoin(temp, "]");
	prompt = readline(name);
	free(temp);
	free(name);
	return (prompt);
}

char	*ft_readline(void)
{
	char	**split;
	char	*name;
	char	*temp;
	char	*prompt;
	int		i;

	i = 0;
	name = ft_strjoin("Minishell", "[");
	temp = getcwd(NULL, 0);
	split = ft_split(temp, '/');
	while (split[i])
		i++;
	i--;
	if (i == -1)
	{
		ft_freesplit(split);
		split = malloc(sizeof(char *) * 2);
		split[0] = ft_strdup("/");
		split[1] = NULL;
		i++;
	}
	free(temp);
	prompt = ft_readlines(temp, name, split[i]);
	ft_freesplit(split);
	return (prompt);
}
