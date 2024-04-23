/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 09:03:06 by sfroidev          #+#    #+#             */
/*   Updated: 2023/12/04 09:07:36 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/mini.h"

void	ft_getpwd(t_data *data)
{
	char	*buff;

	if (data->pwd)
		free(data->pwd);
	buff = ft_calloc(4096 + 1, sizeof(char));
	getcwd(buff, 4096);
	data->pwd = ft_strdup(buff);
	free(buff);
}

char	*ft_strjoinc(char *s1, char s2)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * (strlen(s1) + 2));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = s2;
	i++;
	str[i] = '\0';
	free(s1);
	return (str);
}
