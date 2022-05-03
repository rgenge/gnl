/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 03:08:03 by acosta-a          #+#    #+#             */
/*   Updated: 2022/05/03 19:39:18 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char			*buffer;
	static char		*text;
	int				read_size;
	char			*line;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	read_size = 1;
	while (read_size > 0 && ft_strchr(text, '\n') == NULL)
	{
		read_size = read(fd, buffer, BUFFER_SIZE);
		if(!buffer)
			return(NULL);
		buffer[read_size] = '\0';
		text = ft_strjoin(text, buffer);
	}
	free(buffer);
	line = get_line (text);
	text = get_newtext (text);
	return (line);
}

char	*get_line(char	*text)
{
	char	*line;
	int		i;
	int		size_line;

	i = 0;
	size_line = 0;
	while (text[size_line] != '\n' && text[size_line] != '\0')
		size_line++;
	line = malloc((sizeof(char) * (size_line + 2)));
	if (!line || !text)
		return (NULL);
	while (text[i] != '\n' && text[i])
	{
		line[i] = text[i];
		i++;
	}
	if(text[i] == '\n')
	{
		line[i] = '\n';
		line[i+1] = '\0';
	}
	else
		line = NULL;
	return (line);
}

char	*get_newtext(char	*text)
{
	char	*newtext;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (text[i] && text[i] != '\n')
		i++;
	if (!text)
	{
		free(text);
		return (NULL);
	}
	newtext = malloc((sizeof(char) * (ft_strlen(text) - i + 1)));
	if (!newtext)
		return (NULL);
	if(text[i] == '\n')
		i++;
	while (text[i])
		newtext[j++] = text[i++];
	newtext[j] = '\0';
	if(newtext[0] == '\0')
		return (NULL);
	free(text);
	return (newtext);
}
