/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 09:02:27 by sfroidev          #+#    #+#             */
/*   Updated: 2023/12/04 09:07:48 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/mini.h"

int	ft_check_n(char **tab)
{
	int	i;
	int	j;

	i = 1;
	while (tab[i])
	{
		if (tab[i][0] != '-')
			return (i);
		j = 1;
		while (tab[i][j])
		{
			if (tab[i][j] != 'n')
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_print_echo(char *str, int flag)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_printf("%c", str[i]);
		i++;
	}
	if (flag == 0)
		ft_printf(" ");
}

int	ft_echo(t_data *data, char *prompt)
{
	char		**split;
	int			i;
	int			flag;

	(void)data;
	split = ft_neosplit(prompt, ' ', 0, 0);
	if (!split[1])
		return (ft_freesplit(split), ft_printf("\n"));
	i = ft_check_n(split);
	flag = i;
	if (!split[i])
		return (ft_freesplit(split), 0);
	while (split[i])
	{
		if (split[i + 1])
			ft_print_echo(split[i], 0);
		else
			ft_print_echo(split[i], 1);
		i++;
	}
	if (flag < 2)
		ft_printf("\n");
	return (ft_freesplit(split), 0);
}
