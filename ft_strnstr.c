/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:03:50 by fiaparec          #+#    #+#             */
/*   Updated: 2021/09/08 21:10:27 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*(little + j) == '\0')
		return ((char *)big);
	while (*(big + i) != '\0' && len > 0)
	{
		while (*(big + i) == *(little + j) && len > 0)
		{
			i++;
			j++;
			len--;
		}
		if (*(little + j) == '\0')
			return ((char *) big + i - j);
		i++;
		j = 0;
		len--;
	}
	return (NULL);
}
