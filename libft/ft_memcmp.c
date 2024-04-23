/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjavary <sjavary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:38:17 by sfroidev          #+#    #+#             */
/*   Updated: 2023/12/04 08:38:48 by sjavary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*temps1;
	const unsigned char	*temps2;

	temps1 = (const unsigned char *)s1;
	temps2 = (const unsigned char *)s2;
	i = 0;
	while (i < n && temps1[i] == temps2[i])
		i++;
	if (i == n)
		return (0);
	return ((int)(temps1[i] - temps2[i]));
}
