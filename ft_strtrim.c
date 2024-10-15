/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <ralipran@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:50:35 by ralipran          #+#    #+#             */
/*   Updated: 2024/10/15 15:58:38 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = ft_strlen(s1);
	j = 0;
	str = 0;
	if (s1 != 0 && set != 0)
	{
		while (s1[j] && ft_strchr(set, s1[j]))
			j++;
		while (i > j && s1[i - 1] && ft_strchr(set, s1[i - 1]))
			i--;
		str = (char *)malloc(sizeof(char) * (i - j + 1));
		if (str)
			ft_strlcpy(str, &s1[j], i - j + 1);
	}
	return (str);
}
