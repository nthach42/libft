/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senday <senday@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 12:06:27 by senday            #+#    #+#             */
/*   Updated: 2017/10/22 12:06:41 by senday           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
