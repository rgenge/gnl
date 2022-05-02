/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 03:07:55 by acosta-a          #+#    #+#             */
/*   Updated: 2022/05/01 17:17:09 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
// #define BUFFER_SIZE 2

char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
char	*get_line(char	*text);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *str);
char	*get_newtext(char	*text);

#endif
