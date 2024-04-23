/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjavary <sjavary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:31:48 by sfroidev          #+#    #+#             */
/*   Updated: 2023/12/04 08:39:04 by sjavary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dtemp;
	const char	*stemp;

	if (!src && !dest)
		return (NULL);
	dtemp = (char *)dest;
	stemp = (char *)src;
	while (n--)
		*dtemp++ = *stemp++;
	return (dest);
}
