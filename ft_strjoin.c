/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:02:01 by slazar            #+#    #+#             */
/*   Updated: 2022/10/20 19:35:16 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cnc;
	int i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	cnc = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if(!cnc)
		return (0);
	while (*s1)
	{
		cnc[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		cnc[i] = *s2;
		s2++;
		i++;
	}
	cnc[i] = 0;
	return (cnc);
}