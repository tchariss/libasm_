/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchariss <tchariss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:28:15 by tchariss          #+#    #+#             */
/*   Updated: 2021/04/10 16:50:43 by tchariss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int main()
{
    char *s = "vikos"; 
    char *s6 = "";
    printf("|1| - Function_test: ft_strlen.s\n");
    printf("Cтрока /%s/ равна /%d/ символам\n", s, ft_strlen(s)); // 5
    printf("Cтрока /%s/ равна /%d/ символам\n", s6, ft_strlen(s6)); // 0
// Копирует строку s2 в строку s1, включая '\0', возвращает s1
    char *s1 = "vikos abrikos";
    char s2[14];
    printf("\n|2| - Function_test: ft_strcpy.s\n");
    printf("Копируем строку s1 в s2 - /%s/ \n", ft_strcpy(s2, s1)); //vikos abrikos
    printf("Копируем строку s6 в s2 - /%s/ \n", ft_strcpy(s2, s6)); // 0
// Cравнивает s1 и s2, возвращает значение 0, если строки эквивалентны / Иначе разницу
    char *s4 = "vikos";
    char *s5 = "vekos";
    printf("\n|3| - Function_test: ft_strcmp.s\n");
    printf("Сравниваем s1 - /%s/ и s4 - /%s/ - получаем : %d\n", s, s4, ft_strcmp(s, s4));
    printf("Сравниваем s1 - /%s/ и s5 - /%s/ - получаем : %d\n", s, s5, ft_strcmp(s, s5));
    printf("Сравниваем s1 - /%s/ и s6 - /%s/ - получаем : %d\n", s, s6, ft_strcmp(s, s6));
    printf("Сравниваем s6 - /%s/ и s6 - /%s/ - получаем : %d\n", s6, s, ft_strcmp(s6, s));
//
    printf("\n|4| - Function_test: ft_strdup.s\n");
    printf("Дубликат строки s1 - (%s)  -> /%s/\n", s, ft_strdup(s));
//
    int fd;
    char *str = "hello dear pir\n";
    printf("\n|5| - Function_test: ft_write.s\n");
    fd = open("vikos.txt", O_WRONLY);
    printf("Посмотрим сколько байт мы записали - %d\n", ft_write(fd, str, 16));
    printf("errno - %d\n", errno);
// 
    char buf[16];
    printf("\n|6| - Function_test: read\n");
    fd = open("vikos.txt", O_RDONLY);
    printf("fd - %d\n", fd);
    printf("Посмотрим сколько байт мы прочитали - %d\n", ft_read(fd, buf, 16));
    printf("errno - %d\n", errno);
    printf("buf - %s\n", buf);

// errno // write // errno - 9  ->  «[Errno 9] Bad file descriptor»
    printf("|5-6| - Errno - Function_test: read\n");
    printf("Посмотрим сколько байт мы записали - %d\n", ft_write(-1, str, 16));
    printf("errno - %d\n", errno);
// errno // read
    printf("Посмотрим сколько байт мы прочитали - %d\n", ft_read(-1, buf, 16));
    printf("errno - %d\n", errno);
    

    return 0;
}