/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roweber <roweber@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:58:27 by roweber           #+#    #+#             */
/*   Updated: 2021/10/19 15:58:30 by roweber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *ft_strdup(char *src)
{
    char    *new;
    int     i;
    int     size;

    size = 0;
    while (src[size])
        ++size;
    new = malloc(sizeof(char) * (size + 1));
    if (!new)
        return (NULL);
    i = 0;
    while (src[i])
    {
        new[i] = src[i];
        i++;
    }
    new[i] = '\0';
    return (new);
}

char    *ft_strchr(char *str, char c)
{
    size_t  i;

    i = -1;
    while (str[++i])
        if (str[i] == c)
            return (&str[i]);
    return (NULL);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *new;
    char    *res;

    new = malloc(len + 1);
    res = new;
    while (start--)
        s++;
    while (len-- && *s)
        *new++ = *s++;
    *new = 0;
    return (res);
}

size_t  ft_strlen(const char *s)
{
    size_t  i;

    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}
