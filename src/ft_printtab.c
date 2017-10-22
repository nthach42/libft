/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printtab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senday <senday@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 12:07:14 by senday            #+#    #+#             */
/*   Updated: 2017/10/22 12:07:22 by senday           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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