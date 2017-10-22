/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senday <senday@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 03:19:15 by nthach            #+#    #+#             */
/*   Updated: 2017/10/08 19:43:03 by senday           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * len);
	if (ptr)
	{
		ft_memcpy(ptr, src, (double)len);
		ft_memcpy(dst, ptr, (double)len);
	}
	return (dst);
}
