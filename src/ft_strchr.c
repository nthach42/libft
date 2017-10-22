/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senday <senday@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:15:41 by nthach            #+#    #+#             */
/*   Updated: 2017/10/08 19:46:05 by senday           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	s_len;
	char	*ps;

	i = 0;
	s_len = ft_strlen(s);
	ps = (char *)s;
	if (c == '\0')
		return (ps + s_len);
	while (s_len-- && *ps++)
	{
		if (s[i++] == c)
			return (ps - 1);
	}
	return (NULL);
}
