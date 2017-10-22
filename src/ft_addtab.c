/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addtab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senday <senday@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 23:47:26 by senday            #+#    #+#             */
/*   Updated: 2017/10/22 12:12:06 by senday           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_addtab(char *str, char **tab)
{
	int		i;
	char	**newtab;

	i = 0;
	if (!tab && (newtab = (char **)malloc(sizeof(char*) + 1)))
	{
		newtab[0] = ft_strdup(str);
		newtab[1] = '\0';
	}
	else if ((newtab = (char **)malloc(sizeof(char*)
	* (ft_tablen(tab) + 1) + 1)))
	{
		i = 0;
		while (tab[i])
		{
			newtab[i] = ft_strdup(tab[i]);
			i++;
		}
		newtab[i++] = ft_strdup(str);
		newtab[i] = '\0';
		ft_freetab(tab);
	}
	return (newtab);
}
