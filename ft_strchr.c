/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kooyama <kooyama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 09:45:04 by jo._jj            #+#    #+#             */
/*   Updated: 2023/05/31 19:56:19 by kooyama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	s;

	i = 0;
	s = (char)c;
	while (str[i] != '\0')
	{
		if (str[i] == s)
			return ((char *)str + i);
		++i;
	}
	if (s != '\0')
		return (NULL);
	return ((char *)str + i);
}
