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

int main(int ac, char **av)
{
	int	i = 0, j;
	
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; av[i]; i++)
    {
        for (int j = 0; av[i][j]; j++)
            std::cout << (char)std::toupper(av[i][j]);
    }
	std::cout << std::endl;
	return (0);
}
