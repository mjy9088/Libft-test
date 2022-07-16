/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_6_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:29:33 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/07/16 20:29:43 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	return (strndup(str + start, len));
}

char	*ft_strjoin(char const *prefix, char const *suffix)
{
	char	*result;

	if (asprintf(&result, "%s%s", prefix, suffix) < 0)
		return (NULL);
	return (result);
}

// TODO: implement sample
char	*ft_strtrim(char const *str, char const *ignore_set)
{
	(void)str;
	(void)ignore_set;
	return (NULL);
}

char	**ft_split(char const *str, char c)
{
	(void)str;
	(void)c;
	return (NULL);
}
