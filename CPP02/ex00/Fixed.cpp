#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}


Fixed::Fixed(const Fixed &copied)	/*Const because we do not want to change the copied one*/
{									/*Call by reference because atherwise we couldn't reach the attributes of the object */
	std::cout << "Copy constructor called" << std::endl;
	if (this != &copied)
		operator=(copied);
	this->setRawBits(copied.getRawBits());
} 
Fixed&	Fixed::operator=(const Fixed &copied)
{
	if (this != &copied)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->setRawBits(copied.getRawBits());
	}
	else
		std::cout << "You can't race with me bitch" << std::endl;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;;
}

int	Fixed::getRawBits(void) const // means we cannot change values of attributes
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fpValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->fpValue = raw;
}