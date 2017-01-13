#include "USDollarAmount.h"

using namespace std;

USDollarAmount::USDollarAmount() : cents(0)
{
}

USDollarAmount::USDollarAmount(int Cents) : cents(Cents)
{
}

USDollarAmount::USDollarAmount(const USDollarAmount& Source) : cents(Source.cents)
{
}

USDollarAmount::USDollarAmount(const std::string& Representation) : cents(0)
{
	ParseString(Representation);
}

USDollarAmount& USDollarAmount::operator=(const USDollarAmount& RHS)
{
	cents = RHS.cents;
	return *this;
}

USDollarAmount& USDollarAmount::operator=(const std::string& Representation)
{
	ParseString(Representation);
	return *this;
}

USDollarAmount operator+(const USDollarAmount& LHS, const USDollarAmount& RHS)
{
	return USDollarAmount(LHS.cents + RHS.cents);
}

USDollarAmount operator-(const USDollarAmount& LHS, const USDollarAmount& RHS)
{
	return USDollarAmount(LHS.cents - RHS.cents);
}

void USDollarAmount::ParseString(const std::string& Representation)
{
	cents = 0;
	int dollars = 0;
	size_t decimalPosition = Representation.find(".");
	if (decimalPosition != string::npos)
	{
		dollars = stoi(Representation.substr(0, decimalPosition));
		cents = stoi(Representation.substr(decimalPosition + 1, Representation.size() - decimalPosition - 1));
	}
	else
	{
		dollars = stoi(Representation);
	}

	if (dollars >= 0)
	{
		cents = dollars * 100 + cents;
	}
	else
	{
		cents = dollars * 100 - cents;	// -123.45 should be (-12300) + (-45) = -12345 cents
	}
}
