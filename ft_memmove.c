/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akitty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:19:38 by akitty            #+#    #+#             */
/*   Updated: 2021/10/05 18:19:39 by akitty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	char			*temp;
	char			*temp2;
	size_t			i;

	temp = (char *)src;
	temp2 = (char *)dest;
	i = 0;
	if (dest == 0 && src == 0)
		return (0);
	if (temp2 > temp)
	{
		while (n-- > 0)
			temp2[n] = temp[n];
	}
	else
	{
		while (i < n)
		{
			temp2[i] = temp[i];
			i++;
		}
	}
	return (temp2);
}
