/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchariss <tchariss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:23:23 by tchariss          #+#    #+#             */
/*   Updated: 2021/04/10 16:32:04 by tchariss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>

int ft_strlen(const char *s);
char *ft_strcpy(char *s1, const char *s2);
int ft_strcmp(const char *s1, const char *s2);
char *ft_strdup(const char *s);
int ft_write(int fd, void *buf, size_t count);
int ft_read(int fd, void *buf, size_t count);

#endif