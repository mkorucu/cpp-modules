#include	"Harl.hpp"

int	main(int ac, char **av)
{
	Harl	guy;
	if (ac == 2)
	{
		guy.complain(av[1]);
		return (0);
	}
	else
	{
		guy.complain("debug");
		guy.complain("info");
		guy.complain("warning");
		guy.complain("error");
	}
	return (1);
}