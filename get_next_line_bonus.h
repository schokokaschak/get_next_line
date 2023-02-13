/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akashets <akashets@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:38:32 by akashets          #+#    #+#             */
/*   Updated: 2023/01/10 12:19:09 by akashets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*ft_readrest(int fd, char *rest);
char	*ft_rest(char *rest);
char	*ft_line(char *rest);
char	*ft_strchr(char *str, int i);
char	*ft_strjoin(char *rest, char *buf);
size_t	ft_strlen(char *s);
char	*ft_free(char *str);

#endif
