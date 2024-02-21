/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:52:54 by sessarhi          #+#    #+#             */
/*   Updated: 2024/02/21 18:52:57 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "checker.h"

char	*ft_backup(char **str, int newline)
{
	char	*backup;
	int		len;

	len = ft_strlen(*str);
	backup = ft_substr(*str, newline, len - newline);
	free(*str);
	*str = NULL;
	return (backup);
}

char	*haha1(char **str, int i)
{
	char	*s;

	s = ft_substr(*str, 0, i + 1);
	*str = ft_backup(str, i + 1);
	return (s);
}

char	*get_next_line(int fd)
{
	char		*buff;
	static char	*str;
	int			newline;
	int			rd;

	if (fd < 0 || fd > OPEN_MAX)
		return (NULL);
	if (!str)
		str = ft_strdup("");
	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	rd = read(fd, buff, BUFFER_SIZE);
	while (rd >= 0)
	{
		buff[rd] = '\0';
		if (!str[0] && !rd)
			break ;
		str = ft_strjoin(str, buff);
		newline = ft_strchr(str, '\n');
		if (newline != -42)
			return (free(buff), haha1(&str, newline));
		else if (!rd)
			return (free(buff), ft_backup(&str, 0));
		rd = read(fd, buff, BUFFER_SIZE);
	}
	return (free(str), free(buff), str = NULL, NULL);
}
