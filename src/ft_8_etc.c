/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_8_etc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:30:02 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/07/16 20:34:20 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_itoa(int n)
{
	char	*result;

	if (asprintf(&result, "%d", n))
		return (NULL);
	return (result);
}

void	ft_striteri(char *str, void (*f)(unsigned int index, char *inout_c))
{
	unsigned int	index;

	index = -1;
	while (*str)
		f(++index, str);
}
