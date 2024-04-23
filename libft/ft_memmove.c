/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjavary <sjavary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:32:44 by sfroidev          #+#    #+#             */
/*   Updated: 2023/12/04 08:39:21 by sjavary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dtemp;
	const char	*stemp;
	size_t		i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	dtemp = (char *)dest;
	stemp = (const char *)src;
	if (dtemp < stemp)
	{
		while (i < n)
		{
			dtemp[i] = stemp[i];
			i++;
		}
	}
	else
	{
		while (n--)
			dtemp[n] = stemp[n];
	}
	return (dest);
}
