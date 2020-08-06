/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 12:50:56 by dlobos-m          #+#    #+#             */
/*   Updated: 2020/08/06 11:50:59 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H
# include <stdio.h>
# include <errno.h>
# include <string.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>

size_t		ft_strlen(const char *s);
char		*ft_strcpy(const char *dst, const char *src);
int			ft_strcmp(const char *s1, const char *s2);
ssize_t		ft_write(int fd, const void *cad, size_t len);
ssize_t		ft_read(int fd, void *buf, size_t count);
char		*ft_strdup(const char *s);
#endif