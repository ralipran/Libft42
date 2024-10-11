/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <ralipran@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:50:35 by ralipran          #+#    #+#             */
/*   Updated: 2024/10/10 17:17:09 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return ((char *)(s + i));
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
    const char str[] = "Hello, world!";
    char target = 'w';
    char *result;

    result = memchr(str, target, strlen(str));

    if (result != NULL)
    {
        printf("Le caractère '%c' trouvé à la position : %ld\n",
	   	target, result - str);
    }
    else
    {
        printf("Le caractère '%c' n'a pas été trouvé.\n", target);
    }

    return 0;
}*/
