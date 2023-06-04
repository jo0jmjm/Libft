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


int			ft_atoi(const char *str)
{
	size_t				i;
	int					sign;
	unsigned long int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] != '\0') && ft_isdigit(str[i]))
	{
		if ((result > 922337203685477580 || (result == 922337203685477580
			&& (str[i] - '0') > 7)) && sign == 1)
			return (-1);
		else if ((result > 922337203685477580 || (result == 922337203685477580
			&& (str[i] - '0') > 8)) && sign == -1)
			return (0);
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}