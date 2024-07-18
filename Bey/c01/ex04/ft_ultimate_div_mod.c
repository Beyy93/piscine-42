/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:29:10 by bcouliba          #+#    #+#             */
/*   Updated: 2024/07/02 14:24:40 by bcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;
	int	tempb;

	tempa = *a / *b;
	tempb = *a % *b;
	if (*b != 0)
	{
	*a = tempa;
	*b = tempb;
	}
}

/*int	main(void)
{
	int a = 8;
	int b = 4;
	ft_ultimate_div_mod(&a, &b);
	printf("%d et %d", a, b);
	return (0);
}*/
