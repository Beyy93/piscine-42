/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:54:05 by bcouliba          #+#    #+#             */
/*   Updated: 2024/07/09 21:51:45 by bcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
	i++;
	}
	return (i);
}

/*int	main(void)
{
	char	*a;
	int	i;

	a = "Beydi";
	i = ft_strlen(a);
	printf("%d", i);
	return (0);
}*/
