/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjavary <sjavary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:11:41 by sfroidev          #+#    #+#             */
/*   Updated: 2023/12/04 08:31:47 by sjavary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > 65535 / size)
		return (NULL);
	str = malloc(nmemb * size);
	if (str)
		ft_bzero(str, nmemb * size);
	return (str);
}
