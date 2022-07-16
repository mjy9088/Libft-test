/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_7_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:30:02 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/07/16 20:43:17 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar_fd(char c, int fd)
{
	dprintf(fd, "%c", c);
}

void	ft_putstr_fd(char *str, int fd)
{
	dprintf(fd, "%s", str);
}

void	ft_putendl_fd(char *str, int fd)
{
	dprintf(fd, "%s\n", str);
}

void	ft_putnbr_fd(int n, int fd)
{
	dprintf(fd, "%d", n);
}
