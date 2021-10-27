/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <sumjang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:53:56 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/26 21:18:08 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

intstr_len(char *str);
char*str_cpy(char *result, char *str);

char*ft_strjoin(int size, char **strs, char *sep)
{
char*result;
intlen;
intidx;

if (size == 0)
return ((char *)malloc(sizeof(char)));
idx = -1;
len = 0;
while (++idx < size)
len += str_len(strs[idx]);
len += (str_len(sep) * (size - 1));
result = (char *)malloc(len * sizeof(char));
if (!result)
return (0);
idx = 0;
while (idx < size)
{
result = str_cpy(result, strs[idx]);
result = str_cpy(result, sep);
idx++;
}
result = str_cpy(result, strs[idx]);
return (result);
}

char*str_cpy(char *result, char *str)
{
intidx;
inti;

idx = 0;
i = 0;
while (result[idx])
idx++;
while (str[i])
{
result[idx + i] = str[i];
i++;
}
result[idx + i] = '\0';
return (result);
}

intstr_len(char *str)
{
intidx;

idx = 0;
while (str[idx])
idx++;
return (idx);
}
