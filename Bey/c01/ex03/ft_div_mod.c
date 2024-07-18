/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:04:00 by bcouliba          #+#    #+#             */
/*   Updated: 2024/07/02 14:44:42 by bcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<unistd.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
	*div = a / b;
	*mod = a % b;
	}
}
/*
int     main(void)
{
	int a = 8;
	int b = 4;
	int div = 0;
	int mod = 0;

	ft_div_mod(a, b, &div, &mod);
	return (0);
}*/
