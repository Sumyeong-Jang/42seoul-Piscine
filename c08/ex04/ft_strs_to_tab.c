/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 05:48:37 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/28 06:26:08 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_stock_str.h"

intft_strlen(char *str);
char*ft_strcpy(char *str);

struct s_stock_str*ft_strs_to_tab(int ac, char **av)
{
intidx;
struct s_stock_str*arr;

if (!ac)
{
arr = (char *)malloc(sizeof(char));
arr[0].str = 0;
return (arr);
}
arr = (struct s_stock_str *)malloc((ac + 1) * sizeof(struct s_stock_str));
if (!arr)
return (0);
idx = 0;
while (idx < ac)
{
arr[idx].size = ft_strlen(av[idx]);
arr[idx].str = av[idx];
arr[idx].copy = ft_strcpy(av[idx]);
idx++;
}
arr[idx].str = 0;
return (arr);
}

char*ft_strcpy(char *str)
{
intidx;
char*dest;

idx = 0;
dest = (char *)malloc(ft_strlen(str) * sizeof(char) + 1);
if (!dest)
return (0);
while (str[idx])
{
dest[idx] = str[idx];
idx++;
}
dest[idx] = '\0';
return (dest);
}

intft_strlen(char *str)
{
intlen;

len = 0;
while (str[len])
len++;
return (len);
}
