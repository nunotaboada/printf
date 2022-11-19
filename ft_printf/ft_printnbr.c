/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 04:50:29 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/18 04:50:29 by nmoreira         ###   ########.fr       */
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

char	*ft_itoa(int nbr)
{
	unsigned int	len;
	char			*str;

	len = ft_lenint(nbr);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';/*alterei aqui tinha number = -nbr*/
		nbr = -nbr;
	}
	if (nbr == 0)
		str[0] = '0';
	str[len] = '\0';
	while (nbr)
	{
		str[len - 1] = nbr % 10 + 48;
		len--;
		nbr = nbr / 10;
	}
	return (str);
}

int	ft_printnbr(int nbr)
{
	int	len;
	char *str;
	
	len = 0;
	str = ft_itoa(nbr);
	len = ft_printstr(str);
	free(str);
	str = NULL;
	return (len);
}
		
	
		



