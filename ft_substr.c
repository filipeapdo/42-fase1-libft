/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 19:54:18 by fiaparec          #+#    #+#             */
/*   Updated: 2021/09/16 06:27:57 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		s_sub_len;
	char	*s_sub;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s) || (start == 0 && len == 0))
		return (ft_strdup(""));
	else if (len > ft_strlen(s))
		s_sub_len = ft_strlen(s) - start;
	else if (start == len)
		s_sub_len = len - start + 1;
	else
		s_sub_len = len - start;
	s_sub = (char *)malloc(sizeof(char) * s_sub_len + 1);
	if (!s_sub)
		return (NULL);
	ft_strlcpy(s_sub, s + start, s_sub_len + 1);
	return (s_sub);
}
