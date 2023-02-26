#ifndef EKLE_HPP
#define EKLE_HPP

#include <iostream>
#include <fstream>

class Degis
{
	private:
		std::string _in;
		std::string	_out;
	public:
		Degis(std::string fileName);
		~Degis(void);
		void	replace(std::string s1, std::string s2);
};
#endif