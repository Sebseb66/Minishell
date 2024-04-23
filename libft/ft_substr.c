/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjavary <sjavary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:49:43 by sfroidev          #+#    #+#             */
/*   Updated: 2023/12/04 08:57:03 by sjavary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	lens;
	size_t	i;

	i = 0;
	lens = ft_strlen(s) - start;
	if (len == 0 || start >= ft_strlen(s))
	{
		str = malloc(1 * sizeof(char));
		str[0] = '\0';
		return (str);
	}
	if (len < lens)
		lens = len;
	str = malloc(sizeof(char) * (lens + 1));
	if (str == NULL)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
