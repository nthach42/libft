/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senday <senday@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 12:05:44 by nthach            #+#    #+#             */
/*   Updated: 2017/10/08 19:51:39 by senday           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	i = 0;
	if (str)
	{
		while (*(s + i) != '\0')
		{
			*(str + i) = f(i, *(s + i));
			i++;
		}
		*(str + i) = '\0';
		return (str);
	}
	return (NULL);
}
