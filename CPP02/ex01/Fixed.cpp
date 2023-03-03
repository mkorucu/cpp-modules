#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const int num)
{
	this->fpValue = num;
}

Fixed::Fixed(const float num)
{
	this->fpValue= roundf(num);
}

Fixed::Fixed(const Fixed &copied)
{
	std::cout << "Copy constructor called" << std::endl;	
	this->fpValue = copied.getRawBits();
}
Fixed &Fixed::operator=(const Fixed &copied)
{
	if (&copied != this)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->fpValue = copied.getRawBits();
	}
	else
		std::cout << "same variable called by" << std::endl;
	return (*this);
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