/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjavary <sjavary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:38:45 by sfroidev          #+#    #+#             */
/*   Updated: 2023/12/04 08:55:15 by sjavary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*s2)
		return ((char *)s1);
	if (len == 0)
		return (NULL);
	if (*s2 == '\0')
		return ((char *)s1);
	while (s1[i] != '\0' && i < len)
	{
		j = 0;
		while (s2[j] != '\0' && s1[i + j] != '\0' \
				&& s2[j] == s1[i + j] && (i + j) < len)
			j++;
		if (s2[j] == '\0')
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}
