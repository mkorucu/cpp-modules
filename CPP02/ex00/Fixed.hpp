#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int	fpValue;
		static const int bits = 8;
	public:
				Fixed();
				Fixed(const Fixed	&);
		Fixed	&operator= (const Fixed	&);
				~Fixed();
		int		getRawBits(void)	const;
		void	setRawBits(int const);
};

#endif
