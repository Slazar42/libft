/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:47:35 by slazar            #+#    #+#             */
/*   Updated: 2022/10/20 00:28:29 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*p;
	size_t			cu;

	p = (unsigned char *)str;
	cu = 0;
	while (cu < n)
	{
		if (*(p + cu) == (unsigned char)c)
			return ((void *)p + cu);
		cu++;
	}
	return (NULL);
}
