/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:15:24 by fiaparec          #+#    #+#             */
/*   Updated: 2021/09/12 13:58:05 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*s_new;

	if (s == NULL)
		return (NULL);
	i = 0;
	s_new = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s_new == NULL)
		return (NULL);
	while (*(s + i))
	{
		*(s_new + i) = *(s + i);
		i++;
	}
	*(s_new + i) = '\0';
	return (s_new);
}
