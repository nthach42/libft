/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trimspace.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senday <senday@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 22:44:17 by senday            #+#    #+#             */
/*   Updated: 2017/10/22 01:39:50 by senday           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_trimspace(const char *s)
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
	while (s_len && ft_isspace(ptr_trim[s_len]))
		s_len--;
	while (s_len && ft_isspace(ptr_trim[i]))
		i++;
	if (ft_strlen(s) == 0 || ft_isspace(ptr_trim[i]))
		return ("\0");
	ptr_s = (char *)malloc(sizeof(char) * (s_len - i) + 2);
	if (ptr_s)
		while (i <= s_len)
			ptr_s[j++] = ptr_trim[i++];
	if (ptr_s)
		ptr_s[j] = '\0';
	return (ptr_s);
}
