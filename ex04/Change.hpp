#ifndef CHANGE_HPP
#define CHANGE_HPP

#include <iostream>
#include <fstream>

class Change
{
	private:
		std::string _in;
		std::string	_out;
	public:
		Change(std::string fileName);
		~Change(void);
		void	replace(std::string s1, std::string s2);
};
#endif