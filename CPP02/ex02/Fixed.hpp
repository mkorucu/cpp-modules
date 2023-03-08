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
		Fixed(const int );
		Fixed(const float );
		Fixed(const Fixed &);
		Fixed &operator= (const Fixed &);
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
		bool	operator<(const Fixed &) const; //overloading less than operator
		bool	operator>(const Fixed &) const; //Overloading greater than operator
		bool	operator<=(const Fixed &) const; //Overloading less than or equal to operator
		bool	operator>=(const Fixed &) const; //Overloading greater than or equal to operator
		bool	operator==(const Fixed &) const; //Overloading equality operator
		bool	operator!=(const Fixed &) const; //Overloading inequality operator
		/*			Arithmetic Operators			*/
		Fixed	operator+(const Fixed &) const; //Overloading summation operator
		Fixed	operator-(const Fixed &) const; //Overloading substraction operator
		Fixed	operator*(const Fixed &) const; //Overloading multiplication operator
		Fixed	operator/(const Fixed &) const; //Overloading division operator
		/*			Static functions				*/
		static Fixed		&min(Fixed &,Fixed &);
		static const Fixed	&min(const Fixed &, const Fixed &);
		static Fixed		&max(Fixed &,Fixed &);
		static const Fixed	&max(const Fixed &, const Fixed &);
};

	std::ostream & operator<<(std::ostream &output, Fixed const &obj);

#endif