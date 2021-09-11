/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 22:35:59 by fiaparec          #+#    #+#             */
/*   Updated: 2021/09/10 08:30:34 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 || *s2) && n-- > 0)
	{
		if (((unsigned char) *s1 - (unsigned char) *s2) != 0)
			return (((unsigned char) *s1 - (unsigned char) *s2));
		s1++;
		s2++;
	}
	return (0);
}
