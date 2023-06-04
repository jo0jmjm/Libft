/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jo._jj <jo._jj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 09:34:07 by jo._jj            #+#    #+#             */
/*   Updated: 2023/05/29 10:02:29 by jo._jj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (str);
	i = 0;
	while (i < n)
	{
		*((char *)str + i) = (unsigned char)c;
		i++;
	}
	return (str);
}
