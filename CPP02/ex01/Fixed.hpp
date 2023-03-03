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
		/* Public Member Functions */
		int		getRawBits(void)	const;
		void	setRawBits(int const raw);
		friend std::ostream operator<< (std::ostream &output, Fixed const &sp);
		float	toFloat(void) const;
		int		toInt(void) const;
};
#endif