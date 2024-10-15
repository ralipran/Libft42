/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <ralipran@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:08:47 by ralipran          #+#    #+#             */
/*   Updated: 2024/10/15 19:20:31 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int	word_count(const char *str, const unsigned char c)
{
	int	i;
	int	compteur;

	i = 0;
	compteur = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i] != c && str[i])
			compteur++;
		while (str[i] != c && str[i])
			i++;
	}
	return (compteur);
}

/*int	word_count2(const char *str, const char c)
{
	int	i;
	int	compteur;

	i = 0;
	compteur = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i])
	{
		if ((str[i] == c || str[i + 1] == '\0') && str[i - 1] != c)
			compteur++;
		i++;
	}
	return (compteur);
}*/
size_t	word_len(char const *str, unsigned char c)
{
	size_t	i;

	i = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

char	*word_maker(char const *str, unsigned char c)
{
	char	*substr;
	int		i;
	int		j;

	if (*str == 0)
		return (0);
	i = 0;
	j = 0;
	substr = (char *)malloc(sizeof(char) * word_len(str, c) + 1);
	while (str[i] != c && str[i])
	{
		substr[j] = str[i];
		i++;
		j++;
	}
	substr[j] = '\0';
	return (substr);
}

char	**ft_split(char const *s, char c)
{
	char	**tabs;
	int		count;
	int		i;

	i = 0;
	count = word_count(s, c);
	tabs = (char **)malloc(sizeof(char *) * (count + 1));
	if (tabs == NULL)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		tabs[i] = word_maker(s, c);
			i++;
		while (*s != c && *s)
			s++;
	}
	tabs[count] = NULL;
	return (tabs);
}
/*int	main()
{
	int	i;

	i = 0;
	char *str = "Hello!zzzzzzzzz";

	char	**tabs = ft_split(str, (char)('z' + 122));
	while (tabs[i] != NULL)
	{
		printf("%s\n", tabs[i]);
		i++;
	}
	return (0);
}*/
