/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddzuba <ddzuba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:24:34 by ddzuba            #+#    #+#             */
/*   Updated: 2022/07/05 14:41:54 by ddzuba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

// #ifndef BUFFER_SIZE

// # define BUFFER_SIZE 0

// #endif

//Tools functions
size_t	ft_strlen(char *str);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *s1, char *s2);

//Engine functions
char	*ft_take_line(char *temp);
char	*ft_hold_line(char *temp);
char	*ft_read_line_and_save(int fd, char *temp);

//Main function
char	*get_next_line(int fd);

#endif