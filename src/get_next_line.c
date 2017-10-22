/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senday <senday@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 03:36:06 by senday            #+#    #+#             */
/*   Updated: 2017/10/22 01:37:31 by senday           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_treat_buffer(const int fd, char *buf, char **line, int bs)
{
	int			ret;
	char		*tmp;
	static char	*s[255];

	if (!line || !(s[fd] = !s[fd] ? ft_strnew(1) : s[fd]))
		return (-1);
	while (!ft_strchr(s[fd], '\n') && (ret = read(fd, buf, bs)) > 0)
	{
		tmp = s[fd];
		buf[ret] = '\0';
		s[fd] = ft_strjoin(s[fd], buf);
		free(tmp);
	}
	if (ret < 1)
		return (-1);
	*line = (ft_strchr(s[fd], '\n') ? ft_strsub(s[fd], 0,
				ft_strchr(s[fd], '\n') - s[fd]) : ft_strdup(s[fd]));
	if (ft_strchr((tmp = s[fd]), '\n'))
		s[fd] = ft_strsub(s[fd], ft_strchr(s[fd], '\n') - s[fd] + 1,
				ft_strlen(s[fd]));
	else
		s[fd] = ft_strsub(s[fd], ft_strlen(*line), ft_strlen(s[fd]));
	free(tmp);
	return (!ret && !ft_strlen(s[fd]) && !ft_strlen(*line) ? 0 : 1);
}

int				get_next_line(const int fd, char **line)
{
	char		*buffer;
	int			buffer_size;
	
	*line = NULL;
	if (BUFF_SIZE < 0)
		return (-1);
	if ((buffer = (char *)malloc(BUFF_SIZE)) == NULL)
		buffer_size = 1024;
	else
		buffer_size = (int)BUFF_SIZE;
	if (fd < 0 || (buffer = (char *)malloc(buffer_size)) == NULL)
		return (-1);
	return (ft_treat_buffer(fd, buffer, line, buffer_size));
}
