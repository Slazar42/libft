/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:57:07 by slazar            #+#    #+#             */
/*   Updated: 2022/10/19 17:04:03 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*cc;
	unsigned char	*dc;

	cc = (unsigned char *) src;
	dc = (unsigned char *) dst;
	if (!cc && !dc)
		return (0);
	if (dc > cc)
	{
    	while (len)
    	{
    		dc[len - 1] = cc[len - 1];
    		len--;
		}
	}
	else if (dc < cc)
		while (len)
		{
			*dc = *cc;
			dc++;
			cc++;
			len--;
		}
	return (dst);
}