/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senday <senday@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 09:57:45 by nthach            #+#    #+#             */
/*   Updated: 2017/10/08 19:53:40 by senday           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	size_t	s_len;
	char	*ps;

	s_len = ft_strlen(s);
	ps = (char *)(s + s_len);
	if (c == '\0')
		return (ps);
	while (s_len-- && *--ps)
	{
		if (s[s_len] == c)
			return (ps);
	}
	return (NULL);
}
