/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:30:28 by mkorucu           #+#    #+#             */
/*   Updated: 2023/02/21 14:51:29 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	ft_to_upper(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		return (*str - 32);
	return (*str);
}

int main(int ac, char **av)
{
	int	i = 0, j;
	
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (ac > 1 && av[++i])
	{
		j = -1;
		while (av[i][++j])
			std::cout << ft_to_upper(&av[i][j]);
	}
	std::cout << std::endl;
	return (0);
}
