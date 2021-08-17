/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 22:09:03 by fiaparec          #+#    #+#             */
/*   Updated: 2021/08/16 22:17:08 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*pos;

	pos = NULL;
	while (*s)
	{
		if (*s == c)
			pos = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	else if (pos != NULL)
		return ((char *)pos);
	return (NULL);
}
