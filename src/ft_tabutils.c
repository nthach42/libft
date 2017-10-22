/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabutils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senday <senday@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 00:08:36 by senday            #+#    #+#             */
/*   Updated: 2017/10/22 01:39:50 by senday           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_tablen(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

char		**ft_tabdup(char **tab)
{
	int		i;
	char	**newtab;

	if ((newtab = (char **)malloc(sizeof(char*) * ft_tablen(tab) + 1)))
	{
		i = 0;
		while (tab[i])
		{
			newtab[i] = ft_strdup(tab[i]);
			i++;
		}
		newtab[i] = '\0';
	}
	return (newtab);
}

int			ft_tabcmp(char **tab1, char **tab2)
{
	int		i;
	
	i = 0;
	while (tab1[i] != '\0' && tab2[i] != '\0' && !ft_strcmp(tab1[i], tab2[i]))
		i++;
	if (i != ft_tablen(tab1))
		return (i);
	return (0);
}

void			ft_printtab(char **tab)
{
	int		i;

	i = 0;
	while (tab && tab[i])
		ft_putendl(tab[i++]);
}

void		ft_freetab(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
	{
		free(tab[i++]);		
		tab[i] = '\0';
	}
	free(tab);
}
