/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <ralipran@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:50:35 by ralipran          #+#    #+#             */
/*   Updated: 2024/10/12 18:25:30 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] && i < len)
	{
		if (s1[i] == s2[j])
		{
			while (s1[i + j] == s2[j] && i + j < len)
			{
				if (s2[j + 1] == '\0')
					return ((char *)s1 + i);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
