/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 21:31:09 by fiaparec          #+#    #+#             */
/*   Updated: 2021/09/17 00:31:04 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	flp_cnt_words(char const *s, char c)
{
	int		cnt;
	int		isword;

	cnt = 0;
	isword = 0;
	while (*s)
	{
		if (*s != c && isword == 0)
		{
			cnt++;
			isword = 1;
		}
		if (*s == c && isword == 1)
			isword = 0;
		s++;
	}
	return (cnt);
}

static void	flp_split_words(char **arr_split, char const *s, char c)
{
	int		i;
	int		word_start;
	int		word_len;

	i = 0;
	word_start = 0;
	word_len = 0;
	while (*(s + word_len))
	{
		while (*(s + word_len) == c)
			word_len++;
		word_start = word_len;
		while (*(s + word_len) != c && *(s + word_len) != '\0')
			word_len++;
		if (word_len > word_start)
			*(arr_split + i++) = ft_substr(s, word_start, word_len);
	}
	*(arr_split + i) = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**arr_split;
	int		words_cnt;

	if (!s)
		return (NULL);
	words_cnt = flp_cnt_words(s, c);
	arr_split = (char **)malloc(sizeof(char *) * (words_cnt + 1));
	if (!arr_split)
		return (NULL);
	flp_split_words(arr_split, s, c);
	return (arr_split);
}
