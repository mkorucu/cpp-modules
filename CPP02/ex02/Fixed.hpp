#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	fpValue;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &copied);
		Fixed &operator= (const Fixed &call);
		~Fixed();
		/* 			Public Member Functions			*/
		int		getRawBits(void)	const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		/*			Icrement Operators				*/
		Fixed 	&operator++(); //overloading pre-increment operator
		Fixed	operator++(int); //overloading post-increment operator
		Fixed	&operator--(); //overloading pre-decrement operator
		Fixed	operator--(int); //overloading post-decrement operator
		/*			Comperation Operators			*/
		bool	operator<(const Fixed &obj) const; //overloading less than operator
		bool	operator>(const Fixed &obj) const; //Overloading greater than operator
		bool	operator<=(const Fixed &obj) const; //Overloading less than or equal to operator
		bool	operator>=(const Fixed &obj) const; //Overloading greater than or equal to operator
		bool	operator==(const Fixed &obj) const; //Overloading equality operator
		bool	operator!=(const Fixed &obj) const; //Overloading inequality operator
		/*			Arithmetic Operators			*/
		Fixed	operator+(const Fixed &obj) const; //Overloading summation operator
		Fixed	operator-(const Fixed &obj) const; //Overloading substraction operator
		Fixed	operator*(const Fixed &obj) const; //Overloading multiplication operator
		Fixed	operator/(const Fixed &obj) const; //Overloading division operator
		/*			Static functions				*/
		static Fixed		&min(Fixed &obj1,Fixed &obj2);
		static const Fixed	&min(const Fixed &obj1, const Fixed &obj2);
		static Fixed		&max(Fixed &obj1,Fixed &obj2);
		static const Fixed	&max(const Fixed &obj1, const Fixed &obj2);
};

	std::ostream & operator<<(std::ostream &output, Fixed const &obj);

#endif