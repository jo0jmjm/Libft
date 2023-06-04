/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jo._jj <jo._jj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:20:04 by jo._jj            #+#    #+#             */
/*   Updated: 2023/06/03 16:21:17 by jo._jj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

static int	parse_number(const char *str, int *index)
{
	long long	result;
	int			sign;

	result = 0;
	sign = 1;
	while (is_space(str[*index]))
		(*index)++;
	if (str[*index] == '-')
	{
		sign = -1;
		(*index)++;
	}
	else if (str[*index] == '+')
		(*index)++;
	while (ft_isdigit(str[*index]))
	{
		result = result * 10 + (str[*index] - '0');
		(*index)++;
	}
	return (result * sign);
}

int	ft_atoi(const char *str)
{
	int	index;

	if (str == NULL)
		return (INT_MIN);
	index = 0;
	return (parse_number(str, &index));
}
