/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 22:07:17 by fiaparec          #+#    #+#             */
/*   Updated: 2021/09/08 22:14:39 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*byte;
	void	*s_temp;

	s_temp = s;
	while (n > 0)
	{
		byte = (char *)s_temp;
		*byte = c;
		s_temp++;
		n--;
	}
	return (s);
}
