/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senday <senday@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 16:02:28 by nthach            #+#    #+#             */
/*   Updated: 2017/10/08 19:53:58 by senday           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*add_tab(const char *str, char c, int i)
{
	char		*tab;
	size_t		j;

	j = i;
	while (str[j] && str[j] != c)
		j++;
	tab = (char *)malloc(sizeof(char) * (j - i) + 1);
	j = 0;
	while (str[i] && str[i] != c)
		tab[j++] = str[i++];
	tab[j] = '\0';
	return (tab);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**tab;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) * ft_countwords(s, c) + 1)))
		return (NULL);
	while (j < ft_countwords(s, c) && s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		tab[j++] = add_tab(s, c, i);
		while (s[i] && s[i] != c)
			i++;
	}
	tab[j] = NULL;
	return (tab);
}
