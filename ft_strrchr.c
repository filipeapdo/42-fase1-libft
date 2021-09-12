/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 22:09:03 by fiaparec          #+#    #+#             */
/*   Updated: 2021/09/12 09:45:30 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pos;

	pos = NULL;
	if (!ft_isascii(c))
		return ((char *)s);
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == c)
			pos = (char *)s;
		s++;
	}
	return (pos);
}
