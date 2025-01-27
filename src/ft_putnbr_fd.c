/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:24:16 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/27 18:41:29 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		dec;
	char	c;

	dec = 1;
	while (n / dec >= 10)
		dec *= 10;
	while (n > 0)
	{
		c = n / dec + '0';
		ft_putchar_fd(c, fd);
		n -= n / dec * dec;
		dec /= 10;
	}
}
