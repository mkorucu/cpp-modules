#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->fpValue = num << bits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->fpValue= std::roundf(num * (1 << bits));
}

Fixed::Fixed(const Fixed &copied)
{
	std::cout << "Copy constructor called" << std::endl;	
	*this = copied;
}
Fixed &Fixed::operator=(const Fixed &copied)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (&copied != this)
		this->fpValue = copied.fpValue;
	else
		std::cout << "same variable called by" << std::endl;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->fpValue) / (1 << bits));
}

int	Fixed::toInt(void) const
{
	return (this->fpValue >> bits);
}

std::ostream &operator<<(std::ostream &output, Fixed const &obj)
{
	output << obj.toFloat();
	return (output);
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