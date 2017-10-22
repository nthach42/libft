/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senday <senday@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 12:44:34 by nthach            #+#    #+#             */
/*   Updated: 2017/10/08 19:54:16 by senday           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char	*str;
	size_t	i;

	i = 0;
	str = ft_strchr(big, little[0]);
	if (little[0] == '\0')
		return ((char *)big);
	if (ft_strlen(big) < ft_strlen(little) || big[0] == '\0' || str == NULL)
		return (NULL);
	while (big[i] != '\0')
	{
		if (ft_strncmp(str, little, ft_strlen(little)) == 0)
			return (str);
		i++;
		str = (char *)(big + i);
	}
	return (NULL);
}
