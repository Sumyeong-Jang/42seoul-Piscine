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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		idx;

	if (size == 0)
	{
		result = (char *)malloc(sizeof(char));
		return (result);
	}
	idx = 0;
	while (idx < size)
	{

