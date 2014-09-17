/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghochart <ghochart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 17:33:07 by ghochart          #+#    #+#             */
/*   Updated: 2014/09/09 17:50:54 by ghochart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "libft.h"

size_t	ft_putnbr(long n)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		len += ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
		len += ft_putnbr(n / 10);
	return (ft_putchar(n % 10 + '0') + len);
}
