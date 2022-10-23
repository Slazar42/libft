/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 19:19:06 by slazar            #+#    #+#             */
/*   Updated: 2022/10/23 20:21:19 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ret;
	int		len;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);	
	ret = (char *)malloc(len + 1);
	if (!ret)
		return NULL;
	i = 0;
	while (s[i])
	{
		ret[i] = f(i,s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
