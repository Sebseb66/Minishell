/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjavary <sjavary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:37:41 by sfroidev          #+#    #+#             */
/*   Updated: 2023/12/04 08:37:29 by sjavary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*temp;
	size_t		i;

	i = 0;
	temp = (const char *)s;
	while (i < n)
	{
		if (temp[i] == (char)c)
			return ((void *)(temp + i));
		i++;
	}
	return (NULL);
}
