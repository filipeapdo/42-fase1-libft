/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 20:44:34 by fiaparec          #+#    #+#             */
/*   Updated: 2021/08/16 21:33:24 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	size_t			len_src;
	size_t			len_dst;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	i = 0;
	if (dstsize == 0)
		return (len_src);
	else if (len_dst >= dstsize)
		return (len_src + dstsize);
	else
	{
		while (*(src + i) != '\0' && i < (dstsize - len_dst - 1))
		{
			*(dst + len_dst + i) = *(src + i);
			i++;
		}
		*(dst + len_dst + i) = '\0';
	}
	return (len_src + len_dst);
}
