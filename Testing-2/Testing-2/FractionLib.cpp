#include "FractionLib.h"
#include <iostream>
#include <cmath>

Fraction::Fraction() :numerator(1), denominator(1) {}
Fraction::Fraction(long long numerator, long long denominator) :numerator(numerator), denominator(denominator) 
{
	this->normalize();
}
Fraction::Fraction(const Fraction& fraction) :numerator(fraction.numerator), denominator(fraction.denominator) {}
Fraction::~Fraction() 
{
	this->numerator = 1;
	this->denominator = 1;
}


long long Fraction::getNumerator()
{
	return this->numerator;
}
long long Fraction::getDenominator()
{
	return this->denominator;
}

void Fraction::setNumerator(long long numerator)
{
	this->numerator = numerator;
}
void Fraction::setDenominator(long long denominator)
{
	this->denominator = denominator;
}

void Fraction::set(long long numerator, long long denominator)
{
	this->numerator = numerator;
	this->denominator = denominator;
}

long long tgcd(long long a, long long b)
{
	while (b)
	{
		a %= b;
		std::swap(a, b);
	}
	return std::abs(a);
}

void Fraction::normalize()
{
	long long g = tgcd(this->numerator, this->denominator);
	this->numerator /= g;
	this->denominator /= g;
	if ((this->numerator < 0) && (this->denominator < 0))
	{
		this->numerator = -(this->numerator);
		this->denominator = -(this->denominator);
	}
	else if ((this->denominator < 0))
	{
		this->denominator = -(this->denominator);
		this->numerator = -(this->numerator);
	}
	return;
}

bool operator==(const Fraction& l, const Fraction& r)
{
	return ((l.numerator * r.denominator) == (l.denominator * r.numerator));
}
bool operator==(const long long l, const Fraction& r)
{
	Fraction ll(l, 1);
	return ((ll.numerator * r.denominator) == (ll.denominator * r.numerator));
}
bool operator==(const Fraction& l, const long long r)
{
	Fraction rr(r, 1);
	return ((l.numerator * rr.denominator) == (l.denominator * rr.numerator));
}

bool operator>(const Fraction& l, const Fraction& r)
{
	int sign = ((l.denominator * r.denominator) >= 0) ? 1 : -1;
	return (((l.numerator * r.denominator - l.denominator * r.numerator) * sign) > 0);
}
bool operator>(const long long l, const Fraction& r)
{
	Fraction ll(l, 1);
	int sign = ((ll.denominator * r.denominator) >= 0) ? 1 : -1;
	return (((ll.numerator * r.denominator - ll.denominator * r.numerator) * sign) > 0);
}
bool operator>(const Fraction& l, const long long r)
{
	Fraction rr(r, 1);
	int sign = ((l.denominator * rr.denominator) >= 0) ? 1 : -1;
	return (((l.numerator * rr.denominator - l.denominator * rr.numerator) * sign) > 0);
}

bool operator<(const Fraction& l, const Fraction& r)
{
	return ((!(l == r)) && !(l > r));
}
bool operator<(const long long l, const Fraction& r)
{
	return ((!(l == r)) && !(l > r));
}
bool operator<(const Fraction& l, const long long r)
{
	return ((!(l == r)) && !(l > r));
}

bool operator>=(const Fraction& l, const Fraction& r)
{
	return ((l == r) || (l > r));
}
bool operator>=(const long long l, const Fraction& r)
{
	return ((l == r) || (l > r));
}
bool operator>=(const Fraction& l, const long long r)
{
	return ((l == r) || (l > r));
}


bool operator<=(const Fraction& l, const Fraction& r)
{
	return ((l == r) || (l < r));
}
bool operator<=(const long long l, const Fraction& r)
{
	return ((l == r) || (l < r));
}
bool operator<=(const Fraction& l, const long long r)
{
	return ((l == r) || (l < r));
}

Fraction Fraction::inverse()
{
	return Fraction(this->denominator, this->numerator);
}

Fraction Fraction::abs()
{
	return Fraction(std::abs(this->numerator), std::abs(this->denominator));
}

long long binpow (long long a, long long n) {
	int res = 1;
	while (n) 
	{
		if (n & 1)
		{
			res *= a;
		}
		a *= a;
		n >>= 1;
	}
	return res;
}

Fraction Fraction::pow(long long n)
{
	Fraction tmp(binpow(this->numerator, n), binpow(this->denominator, n));
	return tmp;
}

Fraction operator+(const Fraction& l, const Fraction& r)
{
	Fraction tmp((l.numerator * r.denominator + r.numerator * l.denominator), (l.denominator * r.denominator));
	tmp.normalize();
	return tmp;
}
Fraction operator+(const Fraction& l, const long long r)
{
	Fraction rr(r, 1);
	Fraction tmp((l.numerator * rr.denominator + rr.numerator * l.denominator), (l.denominator * rr.denominator));
	tmp.normalize();
	return tmp;
}
Fraction operator+(const long long l, const Fraction& r)
{
	Fraction ll(l, 1);
	Fraction tmp((ll.numerator * r.denominator + r.numerator * ll.denominator), (ll.denominator * r.denominator));
	tmp.normalize();
	return tmp;
}

Fraction operator-(const Fraction& l, const Fraction& r)
{
	Fraction tmp((l.numerator * r.denominator - r.numerator * l.denominator), (l.denominator * r.denominator));
	tmp.normalize();
	return tmp;
}
Fraction operator-(const Fraction& l, const long long r)
{
	Fraction rr(r, 1);
	Fraction tmp((l.numerator * rr.denominator - rr.numerator * l.denominator), (l.denominator * rr.denominator));
	tmp.normalize();
	return tmp;
}
Fraction operator-(const long long l, const Fraction& r)
{
	Fraction ll(l, 1);
	Fraction tmp((ll.numerator * r.denominator - r.numerator * ll.denominator), (ll.denominator * r.denominator));
	tmp.normalize();
	return tmp;
}

Fraction operator*(const Fraction& l, const Fraction& r)
{
	Fraction tmp(l.numerator * r.numerator, l.denominator * r.denominator);
	tmp.normalize();
	return tmp;
}
Fraction operator*(const long long l, const Fraction& r)
{
	Fraction tmp(l * r.numerator, r.denominator);
	tmp.normalize();
	return tmp;
}
Fraction operator*(const Fraction& l, const long long r)
{
	Fraction tmp(l.numerator * r, l.denominator);
	tmp.normalize();
	return tmp;
}

Fraction operator/(const Fraction& l, const Fraction& r)
{
	Fraction tmp(l.numerator * r.denominator, l.denominator * r.numerator);
	tmp.normalize();
	return tmp;
}
Fraction operator/(const long long l, const Fraction& r)
{
	Fraction tmp(l * r.denominator, r.numerator);
	tmp.normalize();
	return tmp;
}
Fraction operator/(const Fraction& l, const long long r)
{
	Fraction tmp(l.numerator, l.denominator * r);
	tmp.normalize();
	return tmp;
}

std::ostream& operator<<(std::ostream& stream, const Fraction& fraction)
{
	if (fraction.denominator == 1)
	{
		stream << fraction.numerator;
	}
	else
	{
		stream << fraction.numerator << " / " << fraction.denominator;
	}
	return stream;
}