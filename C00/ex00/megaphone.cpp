/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:30:28 by mkorucu           #+#    #+#             */
/*   Updated: 2023/02/15 15:44:32 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

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
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	while (ac > 1 && av[++i])
	{
		j = -1;
		while (av[i][++j])
			cout << ft_to_upper(&av[i][j]);
	}
	return (0);
}