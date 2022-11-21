/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:52:11 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/19 17:52:11 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lenint(int nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
		len++;/* posso ter que multiplicar o nbr por -1*/
	if (nbr == 0)
		len = 1;
	while (nbr)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

void	ft_putnbr(int n)
{
	long long int	n1;//experimentar com long int
	char			c;

	n1 = n;
	if (n1 < 0)
	{
		n1 *= -1;
		write(1, "-", 1);
	}
	if (n1 > 9)
	{
		ft_putnbr(n1 / 10);
		c = n1 % 10 + 48;
		write(1, &c, 1);
	}
	if (n1 <= 9)
	{
		c = n1 + 48;
		write(1, &c, 1);
	}
}

int	ft_printnbr(int nbr)
{
	int	len;
	char *str;
	
	len = 0;
	if (nbr == 0)
		len = write(1, "0", 1);
	else
	{	
		str = ft_putnbr(nbr);
		len = ft_printstr(str);
		free(str);
		str = NULL;
	}	
	return (len);
}