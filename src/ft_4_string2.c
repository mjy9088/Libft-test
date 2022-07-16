/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_string2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:54:14 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/07/16 20:04:40 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>

char	*ft_strdup(const char *str)
{
	return (strdup(str));
}

int	ft_toupper(int c)
{
	return (toupper(c));
}

int	ft_tolower(int c)
{
	return (tolower(c));
}
