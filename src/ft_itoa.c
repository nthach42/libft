/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senday <senday@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 17:31:23 by nthach            #+#    #+#             */
/*   Updated: 2017/10/08 19:37:52 by senday           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	char_number(int n)
{
	size_t		digit_number;

	digit_number = 0;
	while (n > 9 || n < -9)
	{
		n /= 10;
		digit_number++;
	}
	if (n < 0)
		digit_number++;
	return (digit_number);
}

char			*ft_itoa(int n)
{
	char		*str;
	int			tmp;
	size_t		digit_number;

	tmp = n;
	digit_number = char_number(n);
	str = (char *)malloc(sizeof(char) * digit_number + 2);
	if (str)
	{
		if (n < 0)
			str[0] = '-';
		if (n >= 0)
			n *= -1;
		str[digit_number + 1] = '\0';
		while (digit_number > 0)
		{
			str[digit_number] = -(n % 10) + '0';
			n /= 10;
			digit_number--;
		}
		if (tmp >= 0)
			str[digit_number] = -n % 10 + '0';
	}
	return (str);
}
