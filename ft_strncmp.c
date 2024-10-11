/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <ralipran@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:50:35 by ralipran          #+#    #+#             */
/*   Updated: 2024/10/10 19:17:50 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && (s1[i] == s2[i]) && n > 0)
		i++;
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	else
		return (s1[i] - s2[i]);
}
/*#include <stdio.h>
int	main()
{
	char	str1[] = "ABP";
	char	str2[] = "ABC";

	printf("La diff en valeur ascii est de : %d\n", ft_strncmp(str1, str2, 20));
}*/
