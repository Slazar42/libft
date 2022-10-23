/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:27:10 by slazar            #+#    #+#             */
/*   Updated: 2022/10/24 00:02:47 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char *sbs;
	size_t i;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		sbs = malloc(ft_strlen(s) - start + 1);
	else
		sbs = malloc(len + 1);
	if (!sbs)
		return (0);
	i = 0;
	while (s[start] && len)
	{
		sbs[i] = s[start];
		start++;
		i++;
		len--;
	}
	sbs[i] = '\0';
	return ((char *)sbs);
}