/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trimchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senday <senday@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 05:52:12 by nthach            #+#    #+#             */
/*   Updated: 2017/10/08 19:55:35 by senday           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_trimchar(const char *s, char c)
{
	char	*ptr_s;
	char	*ptr_trim;
	size_t	i;
	size_t	j;
	size_t	s_len;

	i = 0;
	j = 0;
	s_len = ft_strlen(s) - 1;
	ptr_trim = (char *)s;
	while (s_len && ptr_trim[s_len] == c)
		s_len--;
	while (s_len && ptr_trim[i] == c)
		i++;
	if (ft_strlen(s) == 0 || ptr_trim[i] == c)
		return ("\0");
	ptr_s = (char *)malloc(sizeof(char) * (s_len - i) + 2);
	if (ptr_s)
		while (i <= s_len)
			ptr_s[j++] = ptr_trim[i++];
	if (ptr_s)
		ptr_s[j] = '\0';
	return (ptr_s);
}
