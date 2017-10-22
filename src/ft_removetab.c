/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_removetab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senday <senday@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 00:46:09 by senday            #+#    #+#             */
/*   Updated: 2017/10/22 01:39:50 by senday           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_removetab(char *str, char **tab)
{
	int		i;
	int		j;
	char	**newtab;

	if (!str || !tab)
		return (tab);
	i = ft_tablen(tab);
	j = 0;
	if ((newtab = (char **)malloc(sizeof(char*) * i + 1)))
	{
		i = 0;
		while (tab[i])
		{
			if (!ft_strncmp(tab[i], str, ft_strlen(str)))
				i++;
			if (tab[i])
				newtab[j++] = ft_strdup(tab[i++]);
		}
		newtab[j] = '\0';
		ft_freetab(tab);
	}
	return (newtab);
}