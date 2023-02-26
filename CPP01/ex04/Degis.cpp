#include "Degis.hpp"

Degis::Degis(std::string fileName) : 
	_in(fileName), _out(this->_in + ".replace"){};

Degis::~Degis(void){};

void	Degis::replace(std::string s1, std::string s2)
{
	std::ifstream	inFile(this->_in);

	if (inFile.is_open())
	{
		std::string	content;
		if (std::getline(inFile, content, '\0'))
		{
			size_t	curr = content.find(s1);
			while (curr != std::string::npos)
			{
				content.erase(curr, s1.length());
				content.insert(curr, s2);
				curr = content.find(s1);
			}
		std::ofstream	outFile(this->_out);
		outFile << content;
		outFile.close();
		}
		else
			std::cerr << "File is empty" << std::endl;
		inFile.close();
	}
	else
		std::cerr << "Unable to open the file.." << std::endl;
}

