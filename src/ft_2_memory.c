/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2_memory.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:54:14 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/07/16 20:00:24 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	ft_bzero(void *mem, size_t len)
{
	bzero(mem, len);
}

void	*ft_memset(void *mem, int value, size_t len)
{
	return (memset(mem, value, len));
}

void	*ft_memcpy(void *mem, const void *source, size_t len)
{
	return (memcpy(mem, source, len));
}

void	*ft_memmove(void *mem, const void *source, size_t len)
{
	return (memmove(mem, source, len));
}

void	*ft_calloc(size_t count, size_t item_size)
{
	return (calloc(count, item_size));
}
