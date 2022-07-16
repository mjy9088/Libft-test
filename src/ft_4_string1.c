/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_string1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:54:14 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/07/16 20:03:38 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *str)
{
	return (strlen(str));
}

size_t	ft_strlcpy(char *dest, char *source, size_t dest_size)
{
	return (strlcpy(dest, source, dest_size));
}

size_t	ft_strlcat(char *dest, char *source, size_t dest_size)
{
	return (strlcat(dest, source, dest_size));
}

int	ft_strncmp(const char *a, const char *b, size_t len)
{
	return (strncmp(a, b, len));
}

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	return (strnstr(str, to_find, len));
}
