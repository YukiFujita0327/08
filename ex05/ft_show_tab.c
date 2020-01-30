/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufujita <yufujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 02:55:06 by yufujita          #+#    #+#             */
/*   Updated: 2020/01/31 00:38:39 by yufujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	putnbr(int nb)
{
	int		n;
	char	tmp;
	char	nb_str[10];

	if (nb == 0)
		write(1, "0", 1);
	n = 0;
	while (nb != 0)
	{
		tmp = nb % 10;
		nb_str[n] = tmp + '0';
		nb /= 10;
		n++;
	}
	while (0 < n)
	{
		if (nb_str[n - 1] != '\0')
			write(1, &nb_str[n - 1], 1);
		else if (n <= 9)
			write(1, "\0", 1);
		n--;
	}
	write(1, "\n", 1);
}

void	putstr(char *str)
{
	int n;

	n = 0;
	while (str[n])
	{
		write(1, &str[n], 1);
		n++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(t_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		putstr(par[i].str);
		putnbr(par[i].size);
		putstr(par[i].copy);
		i++;
	}
}
