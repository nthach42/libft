/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senday <senday@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:51:35 by nthach            #+#    #+#             */
/*   Updated: 2017/10/08 19:54:45 by senday           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ptr_s;
	char	*pt;
	int		i;
	size_t	j;
	int		sl;

	i = 0;
	j = 0;
	sl = ft_strlen(s) - 1;
	pt = (char *)s;
	while (sl > -1 && (pt[sl] == ' ' || pt[sl] == '\n' || pt[sl] == '\t'))
		sl--;
	while (s && (pt[i] == ' ' || pt[i] == '\n' || pt[i] == '\t'))
		i++;
	if (i > sl)
		return (ft_strdup(""));
	ptr_s = (char *)malloc(sizeof(char) * (sl - i) + 2);
	if (ptr_s)
		while (i <= sl)
			ptr_s[j++] = pt[i++];
	if (ptr_s)
		ptr_s[j] = '\0';
	return (ptr_s);
}
