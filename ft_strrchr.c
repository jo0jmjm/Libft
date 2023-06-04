/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kooyama <kooyama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 09:59:21 by jo._jj            #+#    #+#             */
/*   Updated: 2023/05/31 19:56:11 by kooyama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	int		i;
	int		tmp;
	char	s;

	i = 0;
	tmp = -1;
	s = (char)c;
	while (str[i] != '\0')
	{
		if (str[i] == s)
			tmp = i;
		++i;
	}
	if (c == '\0')
		return ((char *)str + i);
	if (tmp != -1)
		return ((char *)str + tmp);
	return (NULL);
}
