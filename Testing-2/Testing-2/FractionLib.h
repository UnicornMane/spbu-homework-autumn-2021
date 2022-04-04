#pragma once
#include <iostream>

class Fraction
{
private:
	long long numerator;
	long long denominator;

public:
	//конструкторы и деструктор
	Fraction();
	Fraction(long long numerator, long long denominator);
	Fraction(const Fraction& fraction);
	~Fraction();
	
	long long getNumerator();
	long long getDenominator();
	
	void setNumerator(long long numerator);
	void setDenominator(long long denominator);

	void set(long long numerator, long long denominator);

	void normalize();

	Fraction inverse();
	
	Fraction abs();

	Fraction pow(long long n);


	friend bool operator==(const Fraction& l, const Fraction& r);
	friend bool operator==(long long l, const Fraction& r);
	friend bool operator==(const Fraction& l, long long r);

	friend bool operator>(const Fraction& l, const Fraction& r);
	friend bool operator>(const long long l, const Fraction& r);
	friend bool operator>(const Fraction& l, const long long r);

	friend bool operator<(const Fraction& l, const Fraction& r);
	friend bool operator<(const long long l, const Fraction& r);
	friend bool operator<(const Fraction& l, const long long r);

	friend bool operator>=(const Fraction& l, const Fraction& r);
	friend bool operator>=(const long long l, const Fraction& r);
	friend bool operator>=(const Fraction& l, const long long r);

	friend bool operator<=(const Fraction& l, const Fraction& r);
	friend bool operator<=(const long long l, const Fraction& r);
	friend bool operator<=(const Fraction& l, const long long r);

	friend Fraction operator+(const Fraction& l, const Fraction& r);
	friend Fraction operator+(const long long l, const Fraction& r);
	friend Fraction operator+(const Fraction& l, const long long r);

	friend Fraction operator-(const Fraction& l, const Fraction& r);
	friend Fraction operator-(const long long l, const Fraction& r);
	friend Fraction operator-(const Fraction& l, const long long r);

	friend Fraction operator*(const Fraction& l, const Fraction& r);
	friend Fraction operator*(const Fraction& l, const long long r);
	friend Fraction operator*(const long long l, const Fraction& r);

	friend Fraction operator/(const Fraction& l, const Fraction& r);
	friend Fraction operator/(const long long l, const Fraction& r);
	friend Fraction operator/(const Fraction& l, const long long r);

	friend std::ostream& operator<<(std::ostream& stream, const Fraction& fraction);


};


