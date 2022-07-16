/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_1_ctype.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:54:14 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/07/16 20:00:25 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int	ft_isalpha(int c)
{
	return (isalpha(c));
}

int	ft_isdigit(int c)
{
	return (isdigit(c));
}

int	ft_isalnum(int c)
{
	return (isalnum(c));
}

int	ft_isascii(int c)
{
	return (isascii(c));
}

int	ft_isprint(int c)
{
	return (isprint(c));
}
