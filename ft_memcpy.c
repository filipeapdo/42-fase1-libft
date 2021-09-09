/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 22:19:10 by fiaparec          #+#    #+#             */
/*   Updated: 2021/09/08 22:31:08 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest_byte;
	char	*src_byte;
	void	*dest_temp;

	dest_temp = dest;
	while (n > 0)
	{
		dest_byte = (char *)dest_temp;
		src_byte = (char *)src;
		*dest_byte = *src_byte;
		dest_temp++;
		src++;
		n--;
	}
	return (dest);
}
