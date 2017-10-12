/**
 * Workshop 5: operator overloading
 * Student: Murawiecki, Damian (121531164)
 * File: Fraction.h
 * 2017/10/11
 * Comments:    This class reperesents fractions.
 */

#ifndef SICT_FRACTION_H

namespace sict {
    class Fraction {
		int numerator;
		int denominator;
		int max() const;
		int min() const;
		void reduce();
		int gcd() const;
	public:
		Fraction();
		Fraction(int, int);
		bool isEmpty() const;
		void display() const;
		Fraction operator+ (const Fraction&) const;
	};
}

#endif // !SICT_FRACTION_H

