/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 22:35:45 by fiaparec          #+#    #+#             */
/*   Updated: 2021/09/12 11:29:49 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if ((!src && !dest) || !n)
		return (dest);
	if (dest > src)
		while (n--)
			*((unsigned char *)dest + n) = *((unsigned char *)src + n);
	else
		while (i++ < n)
			*((unsigned char *)dest + i - 1) = *((unsigned char *)src + i - 1);
	return (dest);
}
