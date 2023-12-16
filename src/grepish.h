/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:48:24 by jonsanch          #+#    #+#             */
/*   Updated: 2023/08/01 15:08:32 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GREPISH_H
# define GREPISH_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 777
# endif

//arg numb
int	three_args(int argc, char **argv);
int two_args(int argc, char **argv);

//printf_colors
void	ft_print_red();
void	ft_print_black();
//libft
int 	ft_strstr(const char *str, const char *to_find);
//get_next_line + utils
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, size_t start, size_t len);
char	*get_next_line(int fd);

#endif
