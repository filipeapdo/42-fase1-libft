/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 22:35:45 by fiaparec          #+#    #+#             */
/*   Updated: 2021/09/10 06:45:24 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*src_temp;

	src_temp = (void *)malloc(sizeof(char) * n);
	ft_memcpy(src_temp, src, n);
	ft_memcpy(dest, src_temp, n);
	return (dest);
}
