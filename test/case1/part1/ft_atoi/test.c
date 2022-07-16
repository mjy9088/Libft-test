/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 00:54:47 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/05/18 01:00:04 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

#include <stdio.h>
#include <stdlib.h>

static const char	*g_formats[] = {
	"%d", "\t%d", "\n%d", "\v%d", "\f%d", "\r%d", " %d", "  %d", "%dx", " %d 0",
	"%+d ", "+%+d", "-%+d", " %+d", " +%+d", " -%+d ", "x%d", "x%015d ", "0%+d",
	"- %d", "+ %d", "0 %d", "%d 0", "%d_0", "0x%d", "%x", "0%x", " %x", "0b0%d",
	"\r\n %+015d", "+%+015d ", "-%+015d ", " %+015d ", " +%+015d ", " -%+015d ",
	"x%+015d", "x %+015d", " \x80%d", " %d\x80", " \xFF%d", " %d\xFF", "\x7F%dx"
};

const char	*test(int n, int (*a)(const char *str), int (*b)(const char *str))
{
	char	str[20];
	size_t	i;

	i = 0;
	while (i < sizeof(g_formats) / sizeof(g_formats[0]))
	{
		snprintf(str, sizeof(str), g_formats[i], n);
		if (a(str) != b(str))
			return (g_formats[i]);
		i++;
	}
	return (NULL);
}
