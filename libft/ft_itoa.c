/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjavary <sjavary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:56:52 by sfroidev          #+#    #+#             */
/*   Updated: 2023/12/04 08:35:05 by sjavary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char	*ft_strrev(char *str, int i, int n, int signe)
{
	while (i >= 0)
	{
		str[i] = (signe * (n % 10)) + 48;
		n = n / 10;
		i--;
	}
	if (signe == -1)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		signe;
	int		len;

	signe = 1;
	len = 1;
	i = n;
	if (n < 0)
	{
		signe = -1;
		len = 2;
	}
	while (i / 10 != 0)
	{
		len++;
		i /= 10;
	}
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	i = len - 1;
	str = ft_strrev(str, i, n, signe);
	return (str);
}
