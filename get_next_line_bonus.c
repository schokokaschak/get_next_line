/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akashets <akashets@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:50:13 by akashets          #+#    #+#             */
/*   Updated: 2023/01/07 11:00:21 by akashets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"get_next_line_bonus.h"

char	*ft_free(char *str)
{
	free(str);
	return (NULL);
}

char	*ft_readrest(int fd, char *rest)
{
	char	*buf;
	int		i;

	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (buf == NULL)
		return (NULL);
	i = 1;
	while (!ft_strchr(rest, '\n') && i != 0)
	{
		i = read(fd, buf, BUFFER_SIZE);
		if (i == -1)
		{
			free(rest);
			free(buf);
			return (NULL);
		}
		buf[i] = '\0';
		rest = ft_strjoin(rest, buf);
	}
	free(buf);
	return (rest);
}

char	*get_next_line(int fd)
{
	char		*ret;
	static char	*rest[1024];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	rest[fd] = ft_readrest(fd, rest[fd]);
	if (rest[fd] == NULL)
		return (NULL);
	ret = ft_line(rest[fd]);
	rest[fd] = ft_rest(rest[fd]);
	return (ret);
}
