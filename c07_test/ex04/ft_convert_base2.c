int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
		idx++;
	return (idx);
}

int	is_space(char ch)
{
	if (ch >= 9 && ch <= 13)
		return (1);
	if (ch == 32)
		return (1);
	return (0);
}

char	*itoa_minus(int n, char *base_to)
{
	int		base_len;
	int		i;
	int		tmp;
	char	*result;

	i = 1;
	base_len = ft_strlen(base_to);
	tmp = n;
	while (tmp > 0)
	{
		tmp /= base_len;
		i++;
	}
	if (n != 0)
		i--;
	result = (char *)malloc(i * sizeof(char) + 1);
	result[0] = '-';
	while (i > 0)
	{
		result[i + tmp] = base_to[n % base_len];
		n /= base_len;
		i--;
	}
	return (result);
}
