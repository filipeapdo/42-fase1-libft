/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:15:24 by fiaparec          #+#    #+#             */
/*   Updated: 2021/09/17 07:31:28 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_dup;

	if (!s)
		return (NULL);
	s_dup = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s_dup)
		return (NULL);
	ft_strlcpy(s_dup, s, ft_strlen(s) + 1);
	return (s_dup);
}
