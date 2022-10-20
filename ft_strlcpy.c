/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:36:17 by slazar            #+#    #+#             */
/*   Updated: 2022/10/20 16:36:12 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*c;

	c = (char *)src;
	if (dstsize)
	{
		while (*c && (dstsize - 1))
		{
			*dst = *c;
			dst++;
			c++;
			dstsize--;
		}
		*dst = '\0';
	}
	return (strlen(src));
}
