/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:37:14 by fiaparec          #+#    #+#             */
/*   Updated: 2021/08/15 20:41:45 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned char	uc;

	uc = (unsigned char) c;
	if (ft_isalpha(uc) || ft_isdigit(uc))
		return (uc);
	else
		return (0);
}
