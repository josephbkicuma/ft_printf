/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kicuma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 00:19:43 by kicuma            #+#    #+#             */
/*   Updated: 2024/07/30 07:18:40 by kicuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int	sum(int count, ...)
{
	va_list	args;
	int	res;

	res = 0;
	va_start(args, count);
	while (count--)
		res += va_arg(args, int);
	va_end(args);
	return (res);
}

int	main(int ac, char **av)
{
	printf("%d", sum(3, 2, 3, 5));
	return (0);
}
