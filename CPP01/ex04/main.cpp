#include "Degis.hpp"

int main(int ac, char **av)
{
	if (ac == 4)
	{
		Degis	rplc(av[1]);
		rplc.replace(av[2], av[3]);
		return (0);
	}
	else
	{
		std::cout << "Please type in order: <filename> <s1> <s2>" << std::endl;
		return (1);
	}
}