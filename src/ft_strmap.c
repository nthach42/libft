/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senday <senday@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:59:23 by nthach            #+#    #+#             */
/*   Updated: 2017/10/08 19:51:23 by senday           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	i = 0;
	if (str)
	{
		while (*(s + i) != '\0')
		{
			*(str + i) = f(*(s + i));
			i++;
		}
		*(str + i) = '\0';
		return (str);
	}
	return (NULL);
}
