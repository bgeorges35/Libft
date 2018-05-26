/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgeorges <bgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 10:56:13 by bgeorges          #+#    #+#             */
/*   Updated: 2017/12/03 17:31:12 by bgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	k;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
		return (0);
	len = ft_strlen((char*)s1) + ft_strlen((char*)s2) - 1;
	str = (char*)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	i = -1;
	k = 0;
	while (s1[++i] != '\0')
	{
		str[k] = s1[i];
		k++;
	}
	i = 0;
	while (s2[i] != '\0')
		str[k++] = s2[i++];
	str[k] = '\0';
	return (str);
}
