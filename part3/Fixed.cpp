#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() : _raw_bits(0) {}

Fixed::Fixed(const int integer) : _raw_bits(integer << _fract) {}

Fixed::Fixed(const float floating)
	: _raw_bits(roundf(floating * (1 << _fract))) {}

Fixed::Fixed(const Fixed &other) : _raw_bits(other._raw_bits) {}

Fixed &Fixed::operator=(const Fixed &other)
{
	_raw_bits = other._raw_bits;
	return *this;
}

Fixed::~Fixed() {}

int	Fixed::getRawBits() const { return _raw_bits; }

void Fixed::setRawBits(const int raw) { _raw_bits = raw; }

int Fixed::toInt(void) const { return _raw_bits >> _fract; }

float Fixed::toFloat(void) const
{
	return (float)_raw_bits / (float)(1 << _fract);
}

bool Fixed::operator>(const Fixed &other) const 
{
	return this->_raw_bits > other._raw_bits;
}

bool Fixed::operator<(const Fixed &other) const
{
	return this->_raw_bits < other._raw_bits;
}

bool Fixed::operator>=(const Fixed &other) const
{
	return this->_raw_bits >= other._raw_bits;
}

bool Fixed::operator<=(const Fixed &other) const
{
	return this->_raw_bits <= other._raw_bits;
}

bool Fixed::operator==(const Fixed &other) const
{
	return this->_raw_bits == other._raw_bits;
}

bool Fixed::operator!=(const Fixed &other) const
{
	return this->_raw_bits != other._raw_bits;
}

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed ret(*this);
	ret._raw_bits += other._raw_bits;
	return ret;
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed ret(*this);
	ret._raw_bits -= other._raw_bits;
	return ret;
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed ret(*this);
	ret._raw_bits *= other._raw_bits;
	ret._raw_bits >>= _fract;
	return ret;
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed ret(*this);
	ret._raw_bits /= other._raw_bits;
	ret._raw_bits <<= _fract / 2;
	return ret;
}

Fixed &Fixed::operator++()
{
	++_raw_bits;
	return *this;
}

Fixed &Fixed::operator--()
{
	--_raw_bits;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed ret(*this);
	++_raw_bits;
	return ret;
}

Fixed Fixed::operator--(int)
{
	Fixed ret(*this);
	--_raw_bits;
	return ret;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (b < a)
		return b;
	else
		return a;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (b > a)
		return b;
	else
		return a;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (b < a)
		return b;
	else
		return a;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (b > a)
		return b;
	else
		return a;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fix)
{
	return out << fix.toFloat();
}