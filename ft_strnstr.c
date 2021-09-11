/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:03:50 by fiaparec          #+#    #+#             */
/*   Updated: 2021/09/11 08:32:11 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (*big && len > 0)
	{
		while (*big == *(little + i) && len > 0)
		{
			big++;
			i++;
			len--;
		}
		if (*(little + i) == '\0')
			return ((char *) big - i);
		big++;
		i = 0;
		len--;
	}
	return (NULL);
}
