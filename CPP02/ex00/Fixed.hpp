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
				Fixed(const Fixed	&copied);
		Fixed	&operator= (const Fixed	&copied);
				~Fixed();
		int		getRawBits(void)	const;
		void	setRawBits(int const raw);
};

#endif
