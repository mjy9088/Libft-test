/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3_find.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:54:14 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/07/16 20:00:42 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *a, const void *b, size_t len)
{
	return (memcmp(a, b, len));
}

void	*ft_memchr(const void *str, int to_find, size_t len)
{
	return (memchr(str, to_find, len));
}

char	*ft_strchr(const char *str, int to_find)
{
	return (strchr(str, to_find));
}

char	*ft_strrchr(const char *str, int to_find)
{
	return (strrchr(str, to_find));
}
