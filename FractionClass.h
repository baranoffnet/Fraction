#include <string>
#include <iostream>
using namespace std;
class FractionClass
{
private:
	int numerator;
	int denominator;
public:
	void setFraction(int numerator, int denominator) {
		this->numerator = numerator;
		this->denominator = denominator;
		if (denominator <= 0) cout << "ERROR";
	}
	int getNumerator() {
		return numerator;
	}
	int getDenominator() {
		return denominator;
	}
	 FractionClass& operator+ (const FractionClass& fractionClass) {
		if (getDenominator() != fractionClass.denominator) {
			numerator = (getNumerator() * fractionClass.denominator) + (fractionClass.numerator * getDenominator());
			denominator = getDenominator() * fractionClass.denominator;
		}
		else {
			numerator = getNumerator() + fractionClass.numerator;
		}
		return *this;
	}
	 FractionClass& operator- (const FractionClass& fractionClass) {
		if (getDenominator() != fractionClass.denominator) {
			numerator = (getNumerator() * fractionClass.denominator) - (fractionClass.numerator * getDenominator());
			denominator = getDenominator() * fractionClass.denominator;
		}
		else {
			numerator = getNumerator() - fractionClass.numerator;
		}
		return *this;
	}
	 FractionClass& operator* (const FractionClass& fractionClass){
		numerator = getNumerator() * fractionClass.numerator;
		denominator = getDenominator() * fractionClass.denominator;
		return *this;
	}
	 FractionClass& operator/ (const FractionClass& fractionClass){
		numerator = getNumerator() * fractionClass.denominator;
		denominator = getDenominator() * fractionClass.numerator;
		return *this;
	}
};
