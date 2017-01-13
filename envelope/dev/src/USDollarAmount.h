#ifndef USDOLLARAMOUNT_H_
#define USDOLLARAMOUNT_H_

#include <string>

class USDollarAmount
{
public:
	USDollarAmount();
	USDollarAmount(int Cents);
	USDollarAmount(const USDollarAmount& Source);
	USDollarAmount(const std::string& Representation);

	USDollarAmount& operator=(const USDollarAmount& RHS);
	USDollarAmount& operator=(const std::string& Representation);

	friend USDollarAmount operator+(const USDollarAmount& LHS, const USDollarAmount& RHS);
	friend USDollarAmount operator-(const USDollarAmount& LHS, const USDollarAmount& RHS);

private:
	void	ParseString(const std::string& Representation);

	int		cents;
};

#endif
