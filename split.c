#include <stdlib.h>

int	ch_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	st_point(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (ch_charset(*str, charset) && *str)
			str++;
		if (!*str)
			break ;
		count++;
		while (!ch_charset(*str, charset) && *str)
			str++;
	}
	return (count);
}

char	**div_split(char *str, char *charset, char **result, int len)
{
	char	*head;
	int		x;
	int		y;
	int		i;

	x = 0;
	while (len--)
	{
		while (ch_charset(*str, charset) && *str)
			str++;
		y = 0;
		i = 0;
		head = str;
		while (!ch_charset(*str, charset) && *str++)
			i++;
		result[x] = (char *)malloc(sizeof(char) * i + 1);
		while (y < i)
			result[x][y++] = *head++;
		result[x][y] = 0;
		x++;
	}
	result[x] = 0;
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	int		len;
	char	**arr;

	len = st_point(str, charset);
	arr = (char **)malloc(sizeof(char *) * len + 1);
	arr = div_split(str, charset, arr, len);
	return (arr);
}
