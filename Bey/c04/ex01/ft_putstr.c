/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:25:28 by bcouliba          #+#    #+#             */
/*   Updated: 2024/07/15 16:53:45 by bcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &i, 1);
		i++;
	}
}

/*int	main(void)
{
	char	*a;

	a = "Beydi";
	ft_putstr(a);
	printf("%s", a);
	return (0);
}*/
